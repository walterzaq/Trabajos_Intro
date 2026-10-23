#include <stdlib.h>

//Acordate que consideramos un caso ideal donde todos los procesos llegan en el instante 0 y al mismo tiempo (luego no llegan mas procesos). Aparte no consideramos interupciones.
//Se tiene una lista L de procesos, que tiene un Process ID (PID), y un Tiempo de servicio requerido (TS).(L es una tabla con dos columnas: PID y TS).

typedef struct{
	int pid;
	int ts_actual;
	int ts_inicial; //esta buena esta estrategia para poder calcular despues el tiempo de espera.
}Proceso;

void round_robin(Proceso l[],int cant){ //cantidad de procesos)

	int q = 4; //Quantum
	int ti = 0; //tiempo de intercambio despreciable en este caso
	//En el caso de que no fuera despreciable, generalmente se obtiene haciendo q/4.

	int r = 0; //Es una simulacion del reloj del sistema que busca ayudarnos a calcular el tiempo que paso desde la llegada de un proceso a la cola de listos hasta que se completo.
	int Pant = -1; //Pant signfica "proceso anterior", e indica el pid del proceso anterior. El valor -1 significa que no existe proceso anterior.
	int sum_ts = 0; //la sumatoria de los tiempos de servicio restantes de todos los procesos intervinientes.
	int cont_r = 0;
	int acumulador_tr = 0;
	int acumulador_te = 0;


	for(int i = 0;i<cant;i++){
        sum_ts += l[i].ts_actual;
	}

	printf("----------------INICIANDO ROUND ROBIN------------------\n\n");
	printf("Identificador de Proceso     |     Tiempo de CPU inicial\n\n");
	for(int i=0;i<cant;i++){
        printf("%i                                             %i\n",l[i].pid,l[i].ts_actual);
    }
    printf("\n\n\n\n");

	while(sum_ts > 0){//Este es un while que verifica si hay que ejecutar una nueva ronda o no.

        cont_r++;
        printf("------------------------RONDA %i--------------------\n",cont_r);
        printf("Identificador de Proceso     |     Tiempo de CPU remanente\n\n");


        for(int i=0;i<cant;i++){

            if(l[i].ts_actual > 0){//Cada proceso en la lista es un struct. Esto es un if que verifica si al proceso actual le queda tiempo de CPU o no.

                if(l[i].pid != Pant){//un if que verifica si el proceso actual y el anterior son diferentes.

                    if(Pant != -1){//Aca se verifica si existe un proceso anterior o no. Es decir, si el proceso actual no es el primero que se ejecuta en toda la rutina.
                        //es distinto al proceso anterior y ademas no es el primero que se ejecuta en toda la rutina.

                        "(Call al Scheduler de Corto plazo para que quite el proceso)";

                        //se quita al proceso anterior del CPU, para poder meter luego al actual.
                        //Es el primer paso de la rutina de cambio de contexto. Fijate que si fuera el primer proceso en la ronda, entonces no habria un proceso anterior cargado
                        //en CPU que debamos quitar. Tampoco corresponderia quitar al proceso anterior del CPU si dicho proceso es el actual. Esto significaria que el proceso
                        //actual es el unico que participa en la ronda y por lo tanto ya no habria necesidad de realizar un cambio de contexto.

                        r = r + ti/2; //Como el tiempo de intercambio comprende el proceso de sacar + poner, necesitas dividirlo a la mitad para considerar el tiempo de cada proceso
                        //por separado. En este caso, como es despreciable, me termina dando 0 de todas formas.
                    }

                    "Call al Scheduler de Corto plazo para que inserte el proceso"; //insertar significa asignar el proceso actual al CPU, se hace siempre q no sea igual
                    //al proceso anterior. Porque si es igual al proceso anterior, entonces estamos en la situacion donde es el unico proceso en la ronda y por lo tanto ya no
                    //se necesita llevar a cabo el cambio de contexto.

                    r = r + ti/2;
                }


                if(l[i].ts_actual > q){ //Un if que verifica si el tiempo de servicio del proceso actual es mayor al Quantum definido.

                    "Ejecutar Proceso L(i).PID por Q tiempo"; //Se ejecuta el proceso actual en el CPU durante todo el Cuanto, sin interrupciones. Le sobra tiempo de CPU, pero no
                    //importa, y debe pasar al siguiente proceso en la ronda.

                    r = r + q; //Esto funciona xq acordate que consideramos una situacion ideal donde todos los procesos llegan en el instante 0. De manera que no importa considerar
                    //quien llego antes o despues en este caso para calcular despues el tiempo de retorno. Aparte no consideramos tiempo de intercambio.
                    //Sumamos un Quantum completo al reloj xq sabemos que el proceso lo aprovecho todo.

                    l[i].ts_actual = l[i].ts_actual - q; //Resto al tiempo de servicio del proceso actual el Cuanto. El tiempo de servicio se va a ir actualizando para representar lo que queda
                    //x procesar.
                }
                else{ //Si el tiempo de servicio remanente es igual o menor al Cuanto, entonces:

                    "Ejecutar Proceso L(i).pid por L(i).TS tiempo"; //se ejecuta el proceso por todo el tiempo que le quede de CPU
                    r = r + l[i].ts_actual; //actualizamos el tiempo de reloj
                    l[i].ts_actual = 0; //actualizamos el tiempo de servicio del proceso

                    //Unicamente en este caso podemos afirmar que el proceso actual se completo. Y el reloj nos va a indicar exactamente el tiempo de retorno. Esto funciona asi
                    //porque el instante de tiempo de ingreso a la cola es 0 para todos, de manera q la formula del tiempo de retorno se reduce a lo que indique el reloj.

                    //Esto es exclusivamente para calcular tiempo medio de retorno y de espera.
                    acumulador_tr += r;
                    acumulador_te += r - l[i].ts_inicial;
                }
             }

             printf("%i                                             %i\n",l[i].pid,l[i].ts_actual);

             Pant = l[i].pid; //Independientemente de que el proceso haya finalizado o no, se va a establecer al proceso actual como el proceso anterior.
        }

        sum_ts = 0;
        for(int i = 0;i<cant;i++){
            sum_ts += l[i].ts_actual;
        }
	}

	printf("\n\nEl tiempo de retorno promedio es: %i\n",acumulador_tr/cant);
	printf("El tiempo de espera promedio es: %i\n",acumulador_te/cant);
}

int main(){

    Proceso l[5];
    int semilla = time(NULL);
    srand(semilla);

    for(int i = 0;i<5;i++){
        l[i].pid = i;
        l[i].ts_inicial = rand() % 12 + 5;
        l[i].ts_actual = l[i].ts_inicial;
    }

    round_robin(l,5);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "operaciones_con_estructuras_de_datos.h"


// Falta aprender a usar SWITCH. Despues quiero que te metas a aprender bien y que documentes todo respecto a archivos (aprende desde el material del aula).


/*Variables Globales:
 Las variables globales son válidas (visibles y modificables) en todas las funciones, salvo aquellas en donde se declaró una variable local con el mismo nombre.
*/ 

/*Parametros y Argumentos:
 Si bien se los utiliza como sinónimos, parámetro y argumento no son lo mismo. El parámetro es el nombre de la variable que utiliza la función en forma interna para 
 hacer uso de cada valor que le está pasando el que la llamó (seria el nombre de la variable en el prototipo de la funcion), mientras que el argumento es el valor en sí
 (el nombre de la variable que se pasa en un llamado a la funcion). Acordate de objetos, que cuando una funcion se ejecuta lo que sucede es que se asigna el contenido de
 los argumentos a los parametros.
*/ 

//MACROS Y CONTANTES:

#define MACRO 16
#define MACRO1 (a + 1)

/*Una macro puede ser un valor o una operacion matematica que no se modifica durante la ejecución de un programa y que ademas tiene un alcance global
para todas las funciones del programa, y para las funciones del programa donde se importe. El proposito de emplearlas creo que es para evitar tener que escribir una
expresion completa que se reutiliza muchas veces. En lugar de eso, nos referiremos a ella a traves de lo que se conoce como "constante simbolica" que, a diferencia de
las variables, se escriben con mayuscula. Además, las macro nos permiten contar con datos globales, en caso de ser necesario compartir un mismo dato en distintas
funciones. A diferencia de las constantes, las macro no tienen un tipo de dato. Simplemente la constante simbolica se va a asociar de manera directa con el valor particular
que introducimos.*/

const int entero = 10;

/*Y asi es como se define una constante. Son la misma mierda que las macro en cuestiones de alcance y de invariabilidad de su valor durante la ejecucion del programa. Pero, a
diferencia de estas, las constantes tienen un tipo de valor asignado. Pero se usan de igual forma.*/

//ARREGLOS (DE DISTINTAS DIMENSIONES), FUNCION RAND, TIME Y SRAND:

int vector[6];

int semilla = time(NULL);
srand(semilla);

vector[3] = rand() % 11;
vector[4] = rand() % (11-4+1) + 4;

/*La funcion rand() es para obtener valores aleatorios dentro de un rango. El rango comienza con cero y termina en un numero anterior al indicado luego de "%". Si
queres que inicie en otro valor, tenes que sumarle ese mismo valor al valor anterior, pero antes restarle el valor minimo entre parentesis.
Para poder obtener resultados distintos con rand() cada vez que ejecutamos el codigo, vamos a necesitar de las instrucciones anteriores. La funcion "time()" con parametro "NULL"
nos permite obtener un valor entero relacionado con el horiario, y cada vez que se ejecute va a devolver un resultado distinto porque el tiempo cambia constantemente. De esta forma
obtenemos el dato denominado "semilla". La funcion "srand()" se va a encargar de hacer que los valores de rand() sean distintos cada vez q se ejecuta el programa, para eso necesita
recibir un parametro entero distinto en cada ejecucion, y por eso recibe la semilla.
IMPORTANTE: Siempre tenes que usar srand y su semilla en el main de tu proyecto, para poder obtener resultados distintos. Nunca en una funcion.*/


scanf("%i",&vector[0]);

//(Para agregar a tu definicion de arreglos): Los arreglos consisten en bloques de codigo. Es decir, un conjunto de celdas de memoria consecutivas, nombradas en forma consecutiva.

int matriz[10][20];

//La primera coordenada es para las filas, y la segunda para las columnas. Para acceder a los datos o para asignar, tienen el mismo orden.

int tensor[3][3][3];

//La primera coordenada es para las filas, la segunda para las columnas, y la tercera para la profundidad. Tanto en la declaracion, como en la asignacion, como en el
//acceso a los datos.

//CURIOSIDAD RESPECTO A ARREGLOS: Si te referis a las coordenadas de un arreglo que superan las dimensiones que estableciste en un principio, el compilador de C no te va a tirar error, solo va a
//acceder al dato de la direccion de memoria correspondiente.

//IMPORTANTISIMO: No es posible "asignar un arreglo a otro arreglo". Es decir, tratar de copiar la cantidad de elementos y valores de esa manera. Lo que si es posible es asignar un arreglo a una
//variable de tipo puntero (siempre que sean del mismo tipo). Entonces el puntero pasaria a convertirse en el mismo vector que le fue asignado, y esto te va a permitir hacer algunas operaciones.



/*TRABAJAR CON CADENAS DE CARACTERES EN C:

C no maneja datos de tipo string. Por lo que hará falta counstruir al string de manera artificial, más precisamente como un vector de char. Para ello, hará falta que
dicho vector tenga al menos un componente adicional (el último), en donde vamos a almacenar un "caracter especial nulo" (\0). Este dato va a indicar al compilador que el "string"
termino. Porque cuando utilicemos dicho vector en alguna funcion, nos puede saltar error si no incluimos ese dato al final.

Si necesitamos recorrer el vector por algun motivo, vamos a usar un ciclo while, que tendra como expresion booleana str[i] != '\0'. Para que el ciclo se detenga una vez que
se llega al dato nulo.*/


//Asi es como declaramos un vector de caracteres, que vendria a ser equivalente a un String. El vector puede estar tan sobredimensionado como se desee. Pero al menos debe contar con un componente adicional para guardar en él 
//el caracter especial nulo. Fijate que podemos hacer una asignacion de una cadena de caracteres directamente sin problema. Al asignar la cadena de esta forma, se agrega automaticamente el caracter especial nulo al final.
char strr[6] = "holaaa";


¿Como hacemos para introducir cadenas de caracteres por teclado? En primer lugar, vamos a crear un vector sobredimensionado del tipo de dato char. Luego vamos a utilizar
la funcion fgets() para guardar el string ingresado por teclado. Luego podremos usar ese string para diferentes operaciones como imprimirlo en pantalla, compararlo con
otro string y obtener la cantidad de elementos utiles (con strlen).*/

char str[15];

printf("Ingrese el string: ");
fgets(str,15,stdin);

/*La funcion fgets recibe 3 parametros: el vector de caracteres, la cantidad maxima de caracteres que se quiere leer (que debe coincidir con los elementos del vector)
y se pone stdin al final. Si en algun lugar ves las funciones "gets" y "puts", tene en cuenta que no se utilizan mas. Ambas se combinan en fgets().*/

//Esta es una forma alternativa y que se considera buena practica para pasar la longitud o cantidad de elementos del vector al fgets.
printf("Ingrese el string: ");
fgets(str,sizeof(str),stdin);
//A partir del mismo vector (de cualquier tipo), la funcion sizeof devuelve un valor entero que indica la cantidad de elementos. Para calcular esto, considera el tamaño que ocupa en memoria una variable del tipo que se indica.

int cantidad = strlen(str);
//Fijate que, a diferencia de sizeof, strlen devuelve la cantidad de caracteres (elementos utiles en un vector de tipo char).

str[cantidad-1] = '\0';

//Cuando se usa la funcion fgets, se agrega luego del ultimo elemento util del vector un salto de linea "\n" y luego el valor nulo "\0". Es necesario que luego 
//reemplaces el salto de linea con "\0" para que despues el string funcione correctamente en diferentes funciones (como strcmp). Hacer esto sera necesario  
//cuando trabajamos con arreglos muy sobredimensionados. Si por casualidad estas empleando un arreglo cuya longitud que se ajusta a la cantidad de elementos 
//utiles (dejando solo uno libre para el caracter especial nulo), entonces fgets descartara el "\n" y no hara falta hacer este procedimiento.

printf("%s",str);

/*Se pone "%s" en el printf para imprimirlo. La impresion se detiene cuando se llega al valor nulo.*/

int respuesta = strcmp(str,"CHUPACABRASSSS");

//strcmp(primer string,segundo string) es una funcion que compara dos cadenas de caracteres. Devuelve 0 si son iguales y 1 si son distintos. La funcion strlen() permite contar la cantidad de
//caracteres del string (elementos utiles del vector) hasta llegar al valor nulo, sin contar a este ultimo. Devuelve un valor entero.

strcpy(nombre,"Conforti");

/*La funcion strcpy() recibe dos parametros: un vector de caracteres y una cadena de caracteres, y sirve para copiar dicha cadena en el vector. */


//PUNTEROS (O PUNTEROS DE INSTRUCCION):

int main(int argc,char *argv[]){

    int entero = 7;

    int *P = &entero;

    /*Asi es como se declara un puntero. Es decir, una variable que va a representar a un registro puntero de instruccion del procesador, y que va a alojar una direccion
    de memoria (tipo de dato "%p"). Cuando declaramos el puntero, debemos indicar al principio el tipo de dato que aloja la celda de memoria cuya direccion va
    a estar almacenada en nuestro puntero. Para asignar el valor usamos el comando "&variable", que es una expresion que nos va a permitir obtener una direccion a
    partir de una variable declarada previamente.*/

    printf("%i \n",*P);
    printf("%p \n",P);
    printf("%p \n",&entero);
    *P = 3;
    printf("%i",entero);

    /*Luego de la declaracion y asignacion de valor del puntero, vamos a poder trabajar con el de dos maneras. Por un lado podemos usar el valor que se aloja en la celda
    de memoria a la que apunta (ej:*P), y por el otro podemos utilizar la direccion que almacena (ej:P). Otra forma de trabajar con una direccion en particular, es obteniendola
    directamente de su variable (con el comando "&variable"). Notar que podemos reasignar el valor de una variable de manera indirecta, a traves del puntero que la señala
    (refiriendonos al valor de la variable con *P). Por ultimo, recorda que el tipo de dato de una direccion se representa con "%p", para cuando uses printf y scanf.

    Recorda siempre asociar primero un puntero declarado a una direccion de memoria para poder utilizar el valor al que apunta.

    Entonces, para acceder al valor de una variable a la que apunta un puntero, se usa la expresion *p. De igual manera, para poder trabajar con los valores de cada uno de los campos
    de un registro al que apunta un puntero (de tipo registro), usamos la expresion p->campo. Sin embargo, como vamos a ver mas abajo, no usamos una expresion especial para poder
    acceder a los datos de un vector mediante un puntero, simplemente es p[i].

    Los punteros nos van a servir para diferentes cosas, entre ellas trabajar con asignacion de memoria dinamica y poder devolver arreglos en una funcion (cosa que no se podia hasta
    ahora).

    Como dato adicional: si queremos emplear la operacion de incremento "++" o decremento "--" sobre un valor accediendo a el a traves de un puntero, deberemos emplear la sintaxis (*p)++, porque si ponemos *p++ nos va
    modificar la direccion de memoria y ya no vamos a estar apuntando al mismo dato o estructura de datos.*/

    return 0;
}


//RELACION ENTRE PUNTEROS Y VECTORES:

//Hay que tener en cuenta desde ahora que los vectores tambien son punteros. Es decir, alojan la direccion de memoria del primer elemento que contienen. Esto signficica lo siguiente:

int *p;
int vector[i];

p = vector;    //N°1: Puedo alojar la direccion del vector en un puntero sin necesidad de emplear el simbolo "&".

p[i] = 1;      //N°2: Puedo trabajar directamente con el puntero como si fuese mi vector (sin emplear el simbolo "*" como lo haria con variables.)

//Estos conocimientos nos van a servir para entender el pasaje de punteros como parametros en funciones.
//IMPORTANTE: Asignar la direccion de memoria contenida en un vector a un puntero previamente declarado te va a ser util para devolver a dicho vector en una funcion, como veremos mas adelante.

/*ACCEDER A LOS ELEMENTOS DE UN VECTOR POR DIRECCION DE MEMORIA:
Ademas de acceder por indice a los elementos de un vector, C nos permite hacerlo de una forma alternativa mediante direcciones de memoria. Por un lado, sabemos que el vector es un puntero que señala al primer elemento en memoria.
Por otro lado, hay que tener en cuenta que la memoria esta organizada fisicamente como una secuencia de celdas que se disponen de manera horizontal. Los elementos de un vector se ubican en celdas consecutivas en memoria. Si 
quisieramos recorrer sus elementos, solo deberias disponer de la direccion de memoria del primer elemento y modificarla a partir de incrementos de uno en uno (o decrementos si quisieramos ir hacia atras).
*/

vector[i] //de manera que esta expresion es equivalente a:
*(vector + i)





"PENDIENTE ENTENDER BIEN ESTO DEL ACCESO A LOS ELEMENTOS DE UNA MATRIZ (aparentemente, para lo que es aritmetica de punteros, es distinto acceder al primer elemento de una matriz por mat, mat[0] y &mat[0][0], mas alla de que 
"apunten exactamente a la misma dirección de memoria)"

"¿Qué representa cada expresión?mat: Es la dirección de memoria de toda la matriz (o del primer bloque que corresponde a la primera fila). Su tipo es puntero a un arreglo de elementos (tipo (*)[N]). mat[0]: Es la dirección de" 
"la primera fila en sí misma. Su tipo es un puntero al primer elemento de esa fila (tipo *). &mat[0][0]: Es la dirección explícita del primer elemento individual de la primera fila. Su tipo también es puntero al elemento (tipo *)."
"¿Por qué son iguales pero distintas para el compilador?Aunque tienen el mismo valor numérico (por ejemplo, 0x7ffee3b...), la diferencia real se nota al hacer aritmética de punteros (cuando sumas + 1):Si sumas mat + 1, el puntero"
"avanza el tamaño de toda una fila completa en bytes.Si sumas mat[0] + 1 o &mat[0][0] + 1, el puntero avanza solo el tamaño de un único elemento (por ejemplo, 4 bytes si es un int)."

"Hay otras cosas pendientes x anotar, estan en el navegador"

/*ACCEDER A LOS ELEMENTOS DE UNA MATRIZ POR DIRECCION DE MEMORIA:

Vamos a estudiar a la matriz como realmente se ve en memoria: una secuencia lineal horizontal de elementos (columnas) organizados en grupos (filas), en lugar de visualizar una tabla. Pensandolo asi, podriamos acceder a cualquier 
elemento de la matriz solo con conocer la direccion de memoria de su primer elemento (m[0][0]), a traves de lo que se conoce como "formula de direccionamiento". Asi es, no va a ser tan simple como acceder a los elementos de 
un vector por la forma en que estan dispuestos y agrupados los datos, pero en escencia nos manejamos con el mismo principio que con los vectores, nomas hay que encontrarle la vuelta en calculo de "aritmetica de punteros"*/

void imprimirMatriz(int *matriz, int f, int c){

    int i,j;
    for (i=0;i<f;i++){
        for (j=0;j<c;j++){
            printf("%i ",*(matriz+(i*c)+j));

            /*Y esta es la famosa formula de direccionamiento, que seria equivalente a un "m[f][c]". Fijate que, a traves de esta formula, partimos de la direccion del primer elemento
            de la matriz. En funcion de la coordenada de fila en la que se encuentra el elemento, su coordenada de columna, la cantidad de columnas que tiene por cada fila y la mencionada
            direccion del primer elemento, logramos obtener la direccion de otro elemento (en el caso de este ciclo anidado, vamos a obtener en forma consecutiva la direccion de todos
            los elementos). Como sabemos, cada elemento es una variable, y si agregamos el signo * a su direccion de memoria, podemos acceder al dato que aloja esa direccion.

            ES MUY IMPORTANTE que, en el tema de pasaje por referencia de matrices, no trabajes con matrices sobredimensionadas. Si lo haces, este metodo no va a funcionar. Tambien
            tenes que evitar mezclar funciones que reciben como parametro una matriz por referencia y por valor, por la misma razon. La formula de direccionamiento no es funcional si
            la cantidad de elementos utiles es menor a la dimension total de la matriz.*/

        }
        printf("\n");
    }
}


//PASAJE DE PARAMETROS POR VALOR:

//En el pasaje de parametros por valor, vamos a incluir como parametro a un tipo de dato determinado, con un nombre de referencia. Ej:

int pasajeDeEntero(int nombre)

int pasajeDeFloat(float nombre)

int pasajeDeChar(char nombre)

int pasajeDeVector(int nombre[]) //Pasaje de vector

int pasajeDeRegistro(struct tipo nombre) //Pasaje de registro (creo qu depende del modo en que hayas construido tu dato tipo registro, por ahi se puede obviar la palabra struct).

int pasajeDeVectorDeRegistros(struct tipo nombre[]) //Pasaje de vector de registros (lo mismo).

int pasajeDeMatriz(int nombre[][c]) //Pasaje de matriz.


/*Notar que la unica forma en que se puede pasar una matriz (de dos o mas dimesiones) como parametro, es introduciendo un valor en la segunda coordenada (o en todas las coordenadas
salvo la primera, en caso de tener mas dimensiones), ya que sino nos va a tirar un error. Para eso, vamos a definir una macro (o una constante) e introducir su constante simbolica.
Introducir este valor va a predefinir la cantidad de "columnas" que podra tener la matriz con la que estemos trabajando. Lo correcto es que se ponga la misma constante simbolica cuando de declara
dicha matriz. Pero esto no quiere decir que estemos obligados a utilizar ese numero de columnas predefinido para nuestra practica. Podriamos considerar el numero de columnas predefinido por la
MACRO como sobredimensionado, y trabajar con menos elementos si quisieramos. Es por ello que usualmente el paso de matrices por parametro (y de cualquier arreglo en general) implica tambien el
pasaje por parametro de la cantidad de elementos utiles en cada dimension (no solo en el pasaje por valor sino tambien por referencia como veremos mas adelante).*/


//PASAJE DE PARAMETROS POR REFERENCIA:

/*Esto quiere decir, utilizar punteros (o directamente una direccion de memoria) para referenciar a un valor. Porque esto ultimo en ocasiones nos puede convenir mas.

Dato primitivo (refiriendome a los tipos de datos predefinidos en el lenguaje, y que no son creados por el usuario):

Para señalar en el paramentro que se va a introducir un dato de tipo puntero, se pone exactamente lo mismo que cuando lo declaramos: "tipo de dato *puntero". Y para introducir el
puntero al llamar a la funcion, podes poner directamente una direccion de memoria o el identificador del puntero (sin *).*/

int parametro_referencia(int *puntero)

//En el cuerpo de dicha funcion, para poder acceder al dato primitivo al que apunta nuestro puntero, hay que usar la expresion "*p".

//Registro:

//Pasar como parametro un puntero de registro es exactamente igual que con los datos primitivos:

int parametro_referencia(struct tipodedato *puntero) //(recorda q por ahi podes obviar el struct).

//Recorda que siempre es similar a la expresion en que declaramos ese tipo de dato.

//Y para poder acceder a sus datos en el cuerpo de la funcion, a diferencia de los datos primitivos, se usa la sintaxis "nombreregistro->campo"

//Vector:

void asignacion_vector(int vector[], int elementos)
void asignacion_vector(int *vector, int elementos)
//Bueno, como dijimos antes, un vector es equivalente a un puntero que señala al primer elemento. De manera que si indicamos el parametro de cualquiera de las formas anteriores es lo mismo. Es importante señalar que,
//como un arreglo es un puntero, entonces el pasaje de parametros siempre es por referencia y no puede ser por valor. Lo mismo con las matrices. Si en el cuerpo de la funcion queres acceder a los elementos, lo 
//haces como un vector como vemos abajo. 

vector[i]






"VAS POR ACA"

//REGISTROS:

typedef struct
{   char nombre[30];
    char apellido[30];
    int edad;
    float decimal_depijasquesecomio;

}persona;

/*
Para laburar con registros, resulta mas sencillo que en Python. Este tipo de estructura heterogenea se define fuera de la funcion principal, como si fuera una funcion.
Lo primero es introducir el comando typedef struct. En el cuerpo de esta instruccion vamos a empezar a listar los campos que va a tener el registro con tipo de dato y
nombre. Si alguno de los campos es un vector, hay que indicar el tamaño entre corchetes. Y si queremos trabajar con una cadena de caracteres, ya sabes como es. A
continuacion del cierre del cuerpo hay que indicar el nombre que va a recibir el tipo de registro que acabamos de crear. En esto consiste la definicion de una estructura de datos de tip registro.*/


int main(int argc,char *argv[]){

    //Es en la funcion principal donde vamos a declarar el tipo de dato registro que creamos anteriormente.

    persona people;

    /*Podemos acceder directamente a los datos con "people.campo" o "people[i].campo" en caso de que sea un vector de registros.*/

    printf("Ingrese el nombre de la persona: ");
    fgets(people.nombre,30,stdin);
    printf("Ingrese el apellido de la persona: ");
    fgets(people.apellido,30,stdin);
    printf("Ingrese la edad de la persona: ");
    scanf("%i",&people.edad);
    int h;
    while((h = getchar()) != '\n' && h != EOF);
    printf("Ingrese en float la cantidad de pijas que se comio la persona: ");
    scanf("%f",&people.decimal_depijasquesecomio);
    int c;
    while((c = getchar()) != '\n' && c != EOF);

    //Los registros siempre se cargan con datos ingresados por teclado. Tene en cuenta que tambien se puede trabajar con vectores de registros, y para la carga de los
    //mismos, utilizamos un ciclo for. Pero es algo sencillo. Los registros tambien pueden tener campos que sean punteros.

    return 0;
}

//NOTA: Otras personas pueden utilizar un metodo equivalente para definir registros:

struct persona
{   char nombre[30];
    char apellido[30];
    int edad;
    float decimal_depijasquesecomio;
};

/*Que es exactamente lo mismo, solo que en el main, al momento de declarar nuestra variable del tipo de dato que acabamos de definir, debemos poner "struct persona" como tipo de dato,
en lugar de solo "persona".*/

//IMPORTANTISIMO: ES posible asignar un dato de tipo registro a otro dato de tipo registro (que sean del mismo tipo de registro). Entonces todos los valores se copiarian de uno a otro.

//TIPO DE DATO enum:

enum Referencia
{
    INTERNO = -1,
    EN_CIRCUNFERENCIA,
    EXTERNO
};

/*Asi es como se define un tipo de dato enum, de manera muy similar a los registros. Como cualquier tipo de dato, puede adoptar un rango de valores, esos van a ser los especificados en el cuerpo
de esta estructura de codigo. Estos valores pueden ser interpretados en algunos casos como el mismo nombre que llevan (por ejemplo, si los devolves en una funcion), o por el numero al que estan
asociados. Porque cuando los vas declarando, uno debajo del otro, se los va enumerando a partir del 0, o a partir del -1 como en este caso particular. Sirve basicamente para manejar datos que
ilustren o den una descripcion sobre si mismos, por ejemplo para devolver diferentes tipos de salidas de un programa.

/*VARIABLES Y VECTORES DINAMICOS:

El lenguaje C permite la asignacion de memoria dinámica. Esto quiere decir, poder definir el tamaño (cantidad de componentes) de una estructura de datos durante la ejecucion de un
programa. Esto nos sirve en caso de que no sepamos de entrada el tamaño de una estructura de datos que debemos definir, y queremos solicitar al usuario que la indique por teclado.
El empleo de la asignacion dinamica de memoria evita tener que recurrir una estructura sobredimensionada o emplear otro metodo que consuma recursos en exceso para definir nuestros datos.

Basicamente, la funcion que debemos utilizar para asignar memoria dinamica es malloc(). Ademas hay que tener en cuenta que, siempre despues de utilizar dicha funcion, se tiene que
llamar a la funcion free() para poder indicar en forma manual que queremos dejar de reservar ese espacio de memoria al finalizar el programa. Por lo que dicha funcion debe posicionarse
al final del codigo.*/


int main(int argc,char *argv[]){

    int *p;
    int i,tam;

    printf("Ingrese la cantidad de elementos del vector/variable:");
    scanf("%i",&tam);
    fflush(stdin);

    p = malloc(tam*sizeof(int));

    /*Se multiplica la cantidad de elementos indicados por el usuario por el tamaño en bytes del tipo de dato, que en este caso es int pero puede ser cualquier dato primitivo o
    tipo de registro definido anteriormente. A traves de este metodo podrias definir una estructura de datos, o un solo dato (variable), al multiplicar por 1. Fijate como al trabajar
    con memoria dinamica, podremos utilizar el dato/estructura de datos a traves del puntero al que asignamos su direccion de memoria, quee es practicamente un vector de por sí.*/

    asignacion_vector(p,tam);

    imprimir_vector(p,tam);

    free(p);

    //Usamos free(puntero) al final del programa.

    return 0;
}


/*
VARIABLES ESTATICAS:

Ahora vamos a ver el uso del comando "static" en C. Nos permite declarar una variable dentro de una funcion que conserve su mismo identificador y valor (de la vez anterior que se llamo
a la funcion) en la proxima vez que se llama a dicha funcion. Es una forma de globalizar a esta variable en los diferentes llamados a su funcion.*/


void variable_static(){
    static int contador = 0;

    /*Asi es como se utiliza static. Es de suma importancia que se le asigne un valor inicial a la variable en la misma linea en la que se declara, sino no funcionaria. Esto se debe
    a que el comando static funciona salteando la primera linea en cada llamado a la funcion. Asi es como se evita que el valor se reinicie.*/

    contador++;
    printf("%i\n",contador);
}

int main(int argc,char *argv[]){

    variable_static();
    variable_static();
    variable_static();

    return 0;
}


/*
DEVOLVER VECTOR EN UNA FUNCION:

Con lo aprendido de punteros, asignacion dinamica de memoria y en variables estaticas, podremos encontrar diferentes metodos para poder devolver un vector en una funcion. En ambos metodos vamos
a observar que la unica manera de devolverlo es como puntero.
Algo importante a tener en cuenta al momento de trabajar en ambos metodos, es que solo podremos devolver al vector, pero no la cantidad de elementos del mismo. Por lo que al utilizar la funcion
en nuestro metodo main, no hay forma de saber la cantidad de elementos que fue asignada en tiempo de ejecucion. Asi que la unica forma de trabajar con el mismo, si necesitamos recorrerlo, es indicar
una cantidad de elementos preestablecida y procurar que el usuario sobredimensione las dimensiones del vector en tiempo de ejecucion. O lo que sería más práctico: volver a pedir al usuario en la
funcion main que ingrese la cantidad de elementos.


METODO CON ASIGNACION DINAMICA DE MEMORIA, O SOLO CON PUNTEROS:*/


int *devuelve_vector_dinamico_asignado(){

    /*Lo primero que observamos es una nueva forma de especificar el dato de salida de la funcion. Con la sintaxis "tipo de dato *nombrefuncion()" definimos que la funcion retorna
    un puntero de cierto tipo.*/

    int tam, *p,i,semilla = time(NULL);
    printf("Cuantos elementos quiere que tenga el vector?: ");
    scanf("%i",&tam);
    fflush(stdin);

    srand(semilla);

    p = malloc(tam*sizeof(int));

    for (i=0;i<tam;i++){
        p[i] = rand() % 51;
        printf("%i ",p[i]);
    }

    printf("\n");

    return p;
}

int main(int argc,char *argv[]){

    int *p = devuelve_vector_dinamico_asignado(), i, cant;

    printf("Cuantos elementos del vector quiere imprimir?: ");
    scanf("%i",&cant);

    for(i=0;i<cant;i++){
        printf("%i ",p[i]);
    }

    return 0;
}

/*Y bueno, como podemos ver el metodo se basa basicamente en utilizar asignacion dinamica de memoria y retornar el vector definido en forma dinamica como puntero. Importante darse cuenta
que acá no usamos la funcion free(p) que siempre viene despues del malloc(), porque en este caso no queremos deshacernos del vector que acabamos de crear, sino que lo queremos
reutilizar luego.*/

//IMPORTANTE: Si bien es posible delcarar una variable de tipo puntero y guardar en ella la direccion de un vector que definimos anteriormente (en memoria estatica), para poder devolver un vector
//a traves de una funcion vamos a utilizar siempre memoria dinamica. Asi que si queres devolver un vector siempre utilizas malloc y en cualquier caso copias el contenido de otro vector al creado con
//memoria dinamica.

/*
METODO CON VECTOR ESTATICOS (no lo vas a usar, asi que no te calentes):

Es un metodo mas sencillo. Solo hay que declarar el vector con el comando "static", y ya podremos ser capaces de retornarlo ya sea como puntero o vector xq son lo mismo.*/


int *devuelve_vector_estatico_asignado(){
    static int vec[10];

    //Importante no tratar de pasar la cantidad de elementos del vector por parametro xq va a dar error, por lo que siempre que utilicemos este metodo va a ser con un numero preestablecido de
    //elementos. Hemos visto que la funcion static servia para otra cosa, pero tambien sirve para retornar vectores.


    int i,semilla = time(NULL);

    srand(semilla);

    for (i=0;i<10;i++){
        vec[i] = rand() % 51;
        printf("%i ",vec[i]);
    }

    printf("\n");

    return vec;
}

int main(int argc,char *argv[]){

    int *p = devuelve_vector_estatico_asignado(), i;


    for(i=0;i<10;i++){
        printf("%i ",p[i]);
    }

    return 0;
}

/*
RETORNAR UNA MATRIZ (AL MENOS BIDIMENSIONAL) EN UNA FUNCION:

No funcionan los metodos anteriores para matrices. Lo que podes hacer es devolver un puntero que almacene la direccion del primer elemento de la matriz y la cantidad de elementos por cada
dimension, para despues poder trabajar con la matriz usando la formula de direccionamiento.


ARCHIVOS DE TEXTO:

FILE *puntero = fopen("archivo.txt","operacion");

*Con esta instruccion es como vas a abrir o crear archivos de texto en C. Con la instruccion "FILE *puntero" es como vas guardar en un puntero especial la direccion de
memoria del archivo que vas a crear (o del que ya existe) para poder trabajar con él en nuestro programa. "fopen" es la funcion que permite abrir o crear el archivo
para utilizarlo. Recibe dos parametros: el nombre del achivo como aparece o va a aparecer en nuestro explorador de achivos y el tipo de operacion que deseamos realizar.



Modos de Apertura:

 “r” Abre un archivo de texto para lectura (read)
 “w” Abre o crea un archivo de texto para escritura desde el comienzo (write). Si el archivo tiene contenido, el mismo se va a borrar y comenzara a escribir desde el
 principio.
 “a” Abre o crea un archivo de texto para escritura al final del archivo (append) (adicion o adjuntar).
 “r+” Abre un archivo de texto para lectura / escritura.
 “w+” Abre o crea un archivo de texto para lectura / escritura
 “a+” Abre un archivo de texto para lectura / agregar.


Escritura:*/

 int main(int argc,char *argv[]){

    FILE *datos = fopen("datos.txt","w");

    if (datos == NULL){
        printf("El archivo no se pudo abrir. Cerrando programa");
        return -1;
    }

    /*Siempe que se abre un archivo hay que incluir esta estructura condicional en caso de fopen falle y no se pueda abrir el archivo. En ese caso la funcion retorna -1 y el
    programa finaliza devolviendo ese valor para indicar que no se ejecuto correctamente.*/

    char palabra[10];
    strcpy(palabra,"PUTO");

    fprintf(datos,"Holaaa ");
    fprintf(datos,"%s",palabra);

    /*fprintf es la funcion que utilizamos para escribir sobre el archivo. Es similar a printf(), solo que debemos introducir un parametro extra al principio con el
    nombre del puntero especial del archivo.*/

    fclose(datos);

    //Es importante que, luego de cada operacion sobre el archivo, se cierre el mismo con la funcion fclose(nombre del puntero de archivo);

    return 0;


}


/*Lectura con fscanf():

*Existen diferentes maneras de leer un archivo. fgets() y fgetc() son funciones que sirven para leer un archivo como una cadena de caracteres, con diferentes metodos.
Pero ahora lo que nos interesa es poder trabajar con los diferentes campos de los registros que leamos, con su tipo de dato correspondiente. Porque C no nos va a dejar
convertir cadenas de caracteres a otro tipo de dato (al menos no de forma natural)...*/

 int main(int argc,char *argv[]){

    char caracter;
    float flotante;
    int entero;

    FILE *datos = fopen("datos.txt","r");

    fscanf(datos,"%c%f%i",&caracter,&flotante,&entero);

    /*Entonces vamos a trabajar con la funcion fscanf(), que tambien es muy similar a la funcion scanf(), con la diferencia de que va a necesitar un parametro extra al
    principio, indicando el nombre del puntero del archivo. Ademas, a diferencia de scanf, nos permite leer varios archivos, de distinto tipo inclusive, en una misma
    instruccion. Esto se muestra arriba.*/

    printf("Los datos de la primera linea son: %c %1.2f %i",caracter,flotante,entero);

    fclose(datos);

    return 0;
}


SPLIT O PARSING:


CORTE DE CONTROL:

La funcion que vamos a usar para leer los datos en el archivo va a ser fscanf(). Despues el funcionamiento es es muy similar a lo visto en Python. Lo unico que cambia es la forma
de determinar que se ha llegado al final del archivo y no quedan mas datos. Recorda que los cortes de control pueden tener diferentes niveles. Es decir, que pueden tener multiples
campos clave o que los registros estan categorizados por mas de un campo. Recorda que es un procedimiento que solo sirve cuando el archivo esta ordenado y sus campos estan agrupados.


int main(int argc,char *argv[]){

    FILE *fp = fopen("datos.txt","r");

    int cliente,anio,mes,minutos;

    fscanf(fp,"%i%i%i%i",&cliente,&anio,&mes,&minutos);
    int cli_ant;
    int anio_ant;
    int total_anio;
    int total_cli;

    while(!feof(fp)){

        *Se usa el comando !feof(puntero del archivo) (end of file) dentro de los parentesis del while para evaluar si se ha llegado al final del archivo o no. A diferencia de lo
        que ocurria en Python, si la funcion que se utiliza para leer datos llega al final del archivo, no interesa los datos que almacene. La cuestion es que se ha llegado al final
        del archivo (luego de leer la ultima linea) y eso te lo va a indicar la funcion !feof() siempre que el archivo se encuentre abierto. Dicha funcion va a devolver un valor
        distinto a 0 (que el while interpretara como True) en caso de que no se haya llegado al final del archivo, y un valor 0 (False) en caso de haber llegado al final del archivo.

        cli_ant = cliente;
        total_cli = 0;
        while ((!feof(fp)) && cli_ant == cliente){
            total_anio = 0;
            anio_ant = anio;
            while ((!feof(fp)) && anio_ant == anio && cli_ant == cliente){
                total_anio+=minutos;
                fscanf(fp,"%i%i%i%i",&cliente,&anio,&mes,&minutos);
            }
            total_cli+=total_anio;
            printf("El total de minutos trabajados con el cliente %i en el año %i fue de: %i \n",cli_ant,anio_ant,total_anio);
        }

        printf("El total de minutos trabajados con el cliente %i fue de: %i \n",cli_ant,total_cli);
    }

    fclose(fp);

    return 0;
}

ARCHIVOS BINARIOS: (PENDIENTE)



LIBRERIA "CTYPE.H"/ FUNCIONES toupper Y tolower:

Con esta libreria estandar podremos hacer uso de las funciones toupper y tolower, que nos permiten convertir un caracter a mayuscula o minuscula respectivamente. Solo hay que hacer un llamado a la
funcion y poner el dato entre parentesis.


CONTROLAR QUE EL INGRESO DE DATOS DE UNA FUNCION CORRESPONDA AL TIPO DE DATO QUE SE DESEA:*/

    printf("ingrese un numero para calcular k-enecimo de fibonacci: \n");
    int validar1;
    int k;
    validar1 = scanf("%d",&k);

    printf("%d",validar1);

//En definitiva, la funcion scanf devuelve "1" en caso de que se haya recibido el tipo de dato indicado en el mismo scanf, o 0 si el dato ingresado no es el correspondiente. Esto te va a permitir
//validar un dato.


/*
APRENDIZAJE PRACTICA: Acordate que es muy util para resolver problemas el metodo de obtener datos extra de una funcion auxiliar (mas alla del dato principal que devuelve). Para eso, podes declarar
e inicializar un puntero fuera de dicha funcion auxiliar (acordate que le tenes que asignar una direccion de memoria para poder usarlo) y pasarselo como parametro. Entonces vamos a modificar el
contenido de esa direccion de memoria dentro de la funcion, y se va a mantener el contenido cuando salgamos de la misma. Otra forma de obtener datos multiples seria delcarar una variable struct y
pasarsela como parametro, entonces devolvemos el struct al final y obtenemos el valor de sus diferentes campos.

Desde ahora, empeza a usar fflush despues de cada scanf o fgets.
*/

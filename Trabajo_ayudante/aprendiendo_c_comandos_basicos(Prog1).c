// En primer lugar, para hacer comentarios de una sola línea, se usan los dos simbolos del principio y no se pone nada al final.
/*Por otro lado, esta es la forma de hacer comentarios
ocupando multiples líneas*/

// Para hacer llaves, apreta alt + 123.

//C distingue entre minusculas y mayusculas.

/*Lo primero que se hace para construir un programa en C, es incluir los headers "stdio.h" y "stdlib.h" al inicio del programa, que proveen funciones basicas para lo que
vamos a hacer de aqui en adelante. Luego definimos la funcion especial "main". Que es una funcion como cualquiera y recibe parametros, ademas tiene un tipo de dato al
principio. Esos aspectos no los vamos a tocar por ahora, solo tenes que saber que asi se define su funcion:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Este header provee funciones matemáticas. Por ej: razones trigonometricas, raiz cuadrada, potencia, entre otras. Es como si fuera una calculadora.
#include "operaciones_con_estructuras_de_datos.h" //Cuando importamos headers creados por nosotros mismos y que situamos en la misma carpeta en donde esta el archivo con el que trabajamos, lo hacemos entre comillas.

/*Toda instruccion en C finaliza con ";"*/

int main(int argc,char *argv[]){
    int entero;
    entero = 9;
    //Así es como se declara una variable. Fijate que antes de asignar un valor, hay que incluir una sentencia extra para asociar el identificador a un tipo de dato.

    float decimal = 4.6678;
    //Tambien se puede declarar la variable de esta forma mas sintetizada. Observa que tambien se usa el punto decimal en C.

    int resto = 15%2;

    char caracter = 'P';
    //Tipo de dato de un caracter solo. Se pone entre comillas simples.

    int hola, forro, hijodeputa;
    //Así se declaran multiples variables de un mismo tipo de una, aunque sin asignar sus valores. Si no las inicializas, su valor es nulo.

    float resultado = decimal*8;
    /*Acá vemos como reutilizar una variable y hacer una operación matemática. * es para multiplicacion,*/

    printf("Por favor, ingrese el valor entero de drogadiccion: ");
    scanf("%i",&hola);
    fflush(stdin);

    /*Así es como vamos a guardar datos introducidos por teclado. Notese que debemos implementar un printf para indicar antes un mensaje en pantalla, algo que no era necesario
    en Python. Deberemos indicar en el primer parametro el tipo de dato entre comillas, como hacemos abajo para los printf: d es para entero, f para flotante y c para char.
    En el segundo parametro se pone el simbolo "&" y a continuacion el nombre de la variable donde queremos alojar el valor.
    Es importante saber que tanto en scanf como en una funcion que vamos a ver mas adelante (fscanf), dejan de leer al momento de encontrarse con un espacio, un tabulador
    o un salto de linea (' ', '\t', '\n', respectivamente).
    Por otro lado, fiajate que luego incluimos la intruccion fflush(stdin); a esta instruccion la deberemo poner siempre despues de un scanf exclusivamente cuando se trabaja con char. Su
    funcion es la de hacer una limpieza del buffer de entrada, que es un memoria que almacena los datos introducidos por el teclado. Cuando usas multiples scanf en un
    programa es posible que en los scanf posteriores no se pause el programa y que sus datos de entrada se introduzcan automaticamente. Esto se debe a que cuando una persona
    introduce datos por teclado, generalmente no se guarda en el buffer solo el valor introducido, sino tambien el salto de linea (\n) que el usuario produce al presionar
    Enter y tambien los espacios que haya. Por lo que si el proximo scanf se emplea para guardar un char, va a chequear en primer lugar el buffer de entrada y va a
    almacenar esos datos que quedan dando vueltas.*/

    char conchudo;

    printf("Ahora introduzca el valor de pijadiccion: ");
    scanf("%c",&conchudo);
    fflush(stdin);

    printf("\tHola chabonnnn: %i \n", entero);
    printf("Hola putoooooo: %f \n", decimal);
    printf("Hola drogadicto: %c \n", caracter);
    printf("Hola forro: %f \n", resultado);
    printf("Drogadiccion: %i \n",hola);
    printf("Pijadiccion: %c \n",conchudo);
    printf("Resto: %i \n",resto);

    /*Para imprimir mensajes en pantalla es casi como Python. La funcion se llama "printf". Ademas, si queremos incluir un segundo parametro entero, vamos a usar el
    comando "%tipo de dato" dentro del string, dejando los espacios que deseemos entre el string y este comando.
    Por otro lado, tene en cuenta que si necesitas pasar multiples datos en un mismo print, de distinto tipo si queres y en cualquier lugar del string, vas a distribuir
    los "%tipodedato" en donde quieras dentro del string, pero luego tenes que poner los diferentes datos separados x coma y en el mismo orden en que pusiste los "%td".
    Al igual que en Python, podemos operar a los valores con otros dentro del printf para modificarlos si lo deseamos.
    Para incluir un parametro float, usamos "%f".Tene en cuenta que al usar el comando "%f", nosotros podemos especificar la cantidad de digitos que queremos tanto para
    la parte entera como para la fraccionaria, simplemente especificandolo entre los signos de esta manera "%4.3f", donde se usarian hasta 4 digitos de la parte entera y
    hasta 3 de la fraccionaria. Si el valor a imprimir tuviera mayor cantidad de digitos en cualquiera de las partes, solo se imprimiria la cantidad especificada,
    redondeando el valor.
    Para incluir un parametro char, usamos "%c".
    Para incluir un valor entro, usamos "%i".
    Para incluir direcciones de memoria, usamos "%p"
    Usamos el comando "\n" dentro del string para que haga un salto de linea antes de imprimir el mensaje proximo, sino me lo va a imprimir al lado. Se pueden usar tantos
    "\n" como uno guste para hacer multiples saltos.
    Usando el comando "\t" se puede dejar un espacio en el margen izquierdo de la impresion para identarla. Tambien se pueden usar tantos como se desee.
    */

    system("pause");
    system("cls");

    return 0;

    /*Si bien la funcion "main" es una funcion especial, tambien es una funcion. Y como toda funcion, debe llevar un return al final. LLeva "return 0" especificamente (esto
    se relaciona con informar que el programa principal se ejecuto correctamente)*/
}

/*Para hacerlo sencillo, voy a hacer una lista de operadores de distinto tipo que funcionan en C

Operadores aritméticos:

Suma: a + b
acumulacion: a += b
Incrementar: a++
Resta: a - b
acumulacion de restas: a -= b
decrementar: a--
Multiplicación: a * b
Multiplicación y asignación: a *= b
División: a / b	<===== IMPORTANTE: C realiza divisiones enteras cuando ambos valores son enteros. Si al menos uno es float, hace una division exacta.
División y asignación: a /= b
Resto de division exacta: a % b
Resto de division exacta y asignación: a %= b

Operaciones matematicas con libreria "math.h":

Raiz cuadrada: sqrt(a) siendo a el radicando.
Potencia: pow(a,b) siendo a la base y b el exponente.


Operadores de comparación:

Menor que: a < b
Mayor que: a > b
Menor o igual que: a <= b
Mayor que o igual que: a >= b
Igual que: a == b
Diferente a: a != b

Operadores lógicos:

Negación lógica (NOT): !a
Y lógico (AND): a && b
O lógico (OR): a || b
*/

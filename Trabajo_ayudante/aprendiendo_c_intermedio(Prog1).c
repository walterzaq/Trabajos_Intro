#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*FUNCIONES Y PROCEDIMIENTOS: Hay que tener en cuenta que no son la misma cosa. Si bien ambos permiten llevar a cabo una operación determinada, las funciones son capaces de devolver un valor
de salida (por eso usan la instruccion return), mientras que los procedimientos no devuelven valor alguno ni emplean la instruccion return.*/

int funcion(int n,bool verdad);

/*De esta manera es como se define una funcion (logicamente fuera de la funcion main). Antes del nombre tenes que indicar el tipo de dato de salida. Fijate que tambien tenes que indicar el
tipo de dato de los parametros que va a recibir la funcion. Entre los tipos de datos se podrian incluir alguno definido por el usuario. Como veremos luego, tambien pueden incluirse otros
simbolos dependiendo de que el dato sea un arreglo o un puntero. La definicion de la funcion se va a llevar a cabo en el header de tu programa.*/

int funcion(int n,bool verdad){
    printf("Holaaa \n");
    return 9;
}
/*Por otro lado, esta seria la implementacion de la funcion. Que incluiria la funcionalidad de la misma. Es lo que tendrias que incluir en un archivo de implementacion de extension c.
Recorda el tema del alcance de las variables. Aquellas que declares en el cuerpo de la funcion (y tambien los nombres que les pongas a los parametros) no van a tener efecto fuera de una
funcion (sea main o la que sea). Lo mismo ocurre en el caso de las conocidas estructuras de control de flujo.*/

void procedimiento(char holaa);

/*De esta manera definis un procedimiento, utilizando la palabra reservada void. Recorda que no lleva return. Los procedimientos son utiles para mostrar mensajes en pantalla, pero tambien
los podes utilizar para modificar datos alojados en la memoria por medio de referencia, como ya veremos mas adelante (recorda esa ventaja del paso de parametros por referencia en vez de
por valor en una funcion).*/

int main(int argc,char *argv[]){

    if (1 == 1){
        printf("HOLAA \n");
    }
    else{
        printf("Chau \n");
    }
    //Bueno asi es como se hacen las estructuras condicionales. Despues podes anidarlas poniendo otros condicionales dentro del if o el else. Despues esta la estructura condicional multiple
    // Switch, pero esa no la aprendas hasta que la uses.
   

    int i;

    for (i=0;i<=8;i++){
        printf("%i, ",i);
    }

    //Asi se define un ciclo for. Fijate que tenes que declarar el iterador antes, pero lo inicializas en el ciclo. Luego indicas el rango de valores que va a recorrer el iterador,
    //y finalmente indicas una operacion que va a ir modificando el valor del iterador con cada ejecucion.

    int c = 4;

    while (c <= 8){
        printf("%i, ",c);
        c++;
    }

    bool verdad = true;

    do {
        printf("Holaaaaaa");
    }while (verdad == false)

    //Y asi es como se hacen los while y su variacion do while.

    bool verdad = true;

    int ent = funcion(6,verdad);
    //... y de esta manera es como llamas a una funcion para utilizarla.

    printf("%i \n",ent);

    system("pause");
    system("cls");

    return 0;
}

/*USO DEL DEBUGGER EN CODEBLOCKS: El debugger de CodeBlocks no se puede ejecutar si tenes algun error de sintaxis. Una vez que lo hayas resuelto, podes usarlo como otros depuradores: indicando el
breaking point y poniendo play. Para moverte entre instruccion e instruccion, tenes que seleccionar next line. Pero si en algun momento tuvieras que ejecutar una funcion, tenes que empezar a
presionar Step Into para poder ejecutar cada instruccion dentro de la funcion, sin slatearlas. Para poder visualizar los datos alojados en variables y estructuras de datos, tenes que hacer click
en la opcion Debugging Windows y seleccionar Watches.*/

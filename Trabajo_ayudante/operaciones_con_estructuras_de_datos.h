#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define h 10 //asi se define este dato que no es una constante pero q actua en forma imilar, no recuerdo como.

//Operaciones con pasaje de arreglos como parametros por valor:

void asignacion_vector(int vec[], int elementos);

void asignacion_matriz(int matriz[][h], int f, int c);

void imprimir_vector(int vec[], int elementos);

void imprimir_matriz(int matriz[][h], int f, int c);

//Operaciones con pasaje de arreglos como parametros por referencia:

void imprimirMatriz(int *p, int f, int c);

void asignacionMatriz(int *p,int f,int c);

/*

COMO TRABAJAR CON ARREGLOS EN FUNCIONES DE C:

Es importante tener en cuenta que trabajar con arreglos en funciones de C difiere un poco de Pyhton. En primer lugar, hay que tener en cuenta que en C, las funciones
no pueden retornar arreglos. En segundo lugar, lo que conviene en C (dependiendo del ejercicio igual), es utilizar procedimientos en lugar de funciones para trabajar 
con arreglos. Porque los procedimientos no devuelven valores, y nosotros solo necesitariamos utilizar arreglos para imprimir sus datos en pantalla o para modificarlos 
reasignando valores.

Otra cosa a tener en cuenta, es que en los ejercicios siempre vamos a saber de entrada la cantidad de componentes que tiene un arreglo (undimensional o multidimensional)
Ya no va a ser como en Python donde habia unos ejercicios que decian "un arreglo que recibe N elementos". Acá en las funciones se pasan como parametros al mismo arreglo
y la cantidad de elementos (para cada dimension). Esto se da porque en C no existe un procedimiento para sacar cantidad de elementos. En realidad si existe un metodo
medio engorroso pero solo para sacar cantidad total de elementos, mas no para sacar elementos de cada dimension. Pero igual vamos a construir algunas funciones generales
para trabajar con arreglos, donde vamos a introducir cantidad de elementos de cada arreglo en particular.

Cuando trabajamos con arreglos estaticos, se utilizan arreglos sobredimensionados. Porque recordemos que trabajar con exactos implica crear un nuevo arreglo y devolverlo.
Si trabajamos con sobredimensionados, solo habra que reasignar valores. Recorda usar una variable con la cantidad de elementos utiles.

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "operaciones_con_estructuras_de_datos.h"

//Vectores. Diferencia entre vectores y listas. Pasaje de parametros por valor y por referencia. sizeof. Implementar funcion con y sin prototipo. Cargar un vector a partir de una o varias funciones. Srand, time y rand. Usar
//rand ya sea para generar valores aleatorios entre diferentes rangos, o incluso para generar numeros decimales aleatorios.
//"Dales un tiempo para que intenten resolver y luego haces una resolucion conjunta."


/*Ejercicio 1:
Crear una función con cuatro parámetros (v, N, menor, mayor) que cargue un vector v de longitud N con números enteros aleatorios comprendidos entre menor y mayor.  
*/
void cargar_v(int v[],int N, int menor, int mayor);

/*Ejercicio 2:
Dados dos vectores A y B de igual cantidad de elementos cargados con la función del punto 1, obtener el producto escalar: Σ A(i) * B(i). 
Ejemplo
A ={5, 7, 3} ; B = {9, 2, 1}
producto_escalar = (5 x 9) + (7 x 2) + (3 x 1)*/

int prod_esc(int v1[],int v2[],int n);

/*Ejercicio 3:
Hacer una función que reciba dos vectores A y B de números enteros de n cantidad de elementos, siendo n un número par, y retorne la suma de los elementos que ocupan las posiciones pares del primero con los elementos que ocupan 
las impares del segundo.  Recuerde que en C las posiciones en los arreglos se numeran desde el cero, y que el cero es un número par.
Ejemplo
A = {13, 2, 1, 6}; B = {5, 7, 3, 9}
sumatoria = 13 + 7 + 1 + 9 
*/
int suma_elementos(int v1[],int v2[], int e);

/*Ejercicio 4:
Dado un arreglo de N elementos, escribir un programa que permita desplazar los elementos del arreglo una posición a la derecha, de tal forma que el primero pase a la segunda posición, el segundo a la tercera y así sucesivamente.
Ejemplo
A = {5, 7, 4, 9, 3} 
resultado = {3, 5, 7, 4, 9}          
*/
void desplazar_elementos(int v[],int e_utiles);

int main(){
	
	//int v[5] = {5,7,4,9,3}; indica en tus apuntes como se inicializa un vector por extension.
	
	int v1[3];
	int v2[3];
	
	cargar_v(v1,3,5,10);
	imprimir_vector(v1,3);
	
	cargar_v(v2,3,5,10);
	imprimir_vector(v2,3);
	
	int escalar = prod_esc(v1,v2,3);
	
	printf("El producto escalar es: %d",escalar);
	
	return 0;
}

void cargar_v(int v[],int N, int menor, int mayor){
	int semilla = time(NULL);
	srand(semilla);
	
	for(int i = 0;i<N;i++){
		v[i] = rand() % (mayor-menor+1) + menor;
	}	
}

int prod_esc(int v1[],int v2[],int n){
	int res = 0;
	
	for(int i = 0;i<n;i++){
		res = res + (v1[i] * v2[i]);
	}	
	
	return res;
}

int suma_elementos(int v1[],int v2[], int n){
	int acumulador = 0;
	
	for(int i = 0;i<n;i++){
		if(i%2 == 0){acumulador+= v1[i];}	
		else{acumulador+= v2[i];}
	}	
	return acumulador;
}

void desplazar_elementos(int v[],int e_utiles){ //Recorda apuntar esto de que necesitas pasar la cantidad de elementos utiles cuando pasas un vector por parametro,
	int ultimo = v[e_utiles - 1];
	
	for(int i = e_utiles-1;i>0;i--){
		v[i] = v[i-1];
	}	
	v[0] = ultimo;
	imprimir_vector(v,e_utiles);
}

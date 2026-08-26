#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "operaciones_con_estructuras_de_datos.h"

//Ejercicio 1, 2 y 3:
int suma_enteros(int n1,int n2);

//Ejercicio 4:
int condicion_alumno(int n1,int n2);

//Ejercicio 5:
void tipo_bomba(int opcion);

int main(int argc,char *argv[]){

	
	return 0;
}

int suma_enteros(int n1,int n2){
	int suma = n1+n2;
	return suma;
}

int condicion_alumno(int n1,int n2){
	int condicion = 0;
	
	if(n1>=4 && n2>=4){
		
		float promedio = (n1+n2)/2.00;
		if(promedio>=7){condicion = 1;}
		else{condicion = 2;}
	}
	else{condicion = 3;}
	
	return condicion;
}

void tipo_bomba(int opcion){
	switch(opcion){
		case 0:
			printf("No hay establecido un valor definido para el tipo de bomba");
			break;
		case 1:
			printf("La bomba es una bomba de agua");
			break;
		case 2:
			printf("La bomba es una bomba de gasolina");
			break;
		case 3:
			printf("La bomba es una bomba de hormigón");
			break;
		case 4:
			printf("La bomba es una bomba de pasta alimenticia");
			break;
		default:
			printf("No existe un valor válido para tipo de bomba");
			break;
	}	
}

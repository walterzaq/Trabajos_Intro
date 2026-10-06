#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

//consigna 1
int * retornar_tamanio(char cadena[]){
    int tamanio = strlen(cadena);
    
    return &tamanio;
}

//consigna 3
int cantidad_caracteres_cons(char str1[], char str2[]){
    int cant = strlen(str1), i = 0;
    bool iguales = true;
    
    while(i<cant && str1[i] == str2[i]){
        i++;
    }
    
    return i;
}

//consigna 2
int cantidad_caracteres_cons(char str1[], char str2[]){
    int cant = strlen(str1), i = 0;
    bool iguales = true;
    
    while(i<cant && str1[i] == str2[i]){
        i++;
    }
    
    return i;
}

int main(){
	
	return 0;
}
        
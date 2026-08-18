#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operaciones_con_estructuras_de_datos.h"
const int ente = 10; //Asi se define una constante

void asignacion_vector(int vec[], int elementos){
    int i;
    int semilla = time(NULL);
    srand(semilla);

    for(i=0;i<elementos;i++){
        vec[i] = rand() % 15;
    }
}

void asignacion_matriz(int matriz[][h], int f, int c){

    int i, j;

    int semilla = time(NULL);
    srand(semilla);

    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            matriz[i][j] = rand() % 10;
        }
    }
}

void imprimir_vector(int vec[], int elementos){
    int i;

    for(i=0;i<elementos;i++){
        printf("%i ",vec[i]);
    }
    
    printf("\n");
}

void imprimir_matriz(int matriz[][h], int f, int c){

    int i, j;

    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            printf("%i ",matriz[i][j]);
        }
        printf("\n");
    }
}

//Operaciones con pasaje de arreglos como parametros por referencia:

void imprimirMatriz(int *p, int f, int c){
    
    int i,j;

    for (i=0;i<f;i++){
        for (j=0;j<c;j++){
            printf("%i ",*(p+(i*c)+j));
        }
        printf("\n");
    }
}

void asignacionMatriz(int *p,int f,int c){

    int i,j;

    int semilla = time(NULL);
    srand(semilla);

    for (i=0;i<f;i++){
        for (j=0;j<c;j++){
            *(p+(i*c)+j) = rand() % 10;
        }
    }
}

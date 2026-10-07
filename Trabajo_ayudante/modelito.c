#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define N 5

//Utilidades
void mostrar_matriz(int m[][N], int f,int c) {
	
	for(int i = 0;i<f;i++){
		for(int j = 0;j<c;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
    printf("\n");
}

void mostrar_v(int v[]){
	
	for(int i = 0;i<N;i++){
		printf("[%d] ",v[i]);
	}	
	printf("\n\n");
}


//consigna 1
int consigna_1(char p[]){
	
	int cont = 0;
	char *puntero = p;
	
	while(*(puntero) != '\0'){
		puntero++;
		cont++;
	}
	
	return cont;
}

//consigna 2

void carga(int m[N][N]){
	int cont = 1;
	for(int i = 0;i<N;i++){
		for(int j = 0;j<N;j++){
			m[i][j] = cont*cont;
			cont = cont + 1;
		}
	}
}

void resta(int m[][N],int v[]){
    
    for(int f = 0;f<N;f++){
		v[f] = m[N-1][f] - m[0][f];
	}
}


//consigna 3

int consigna_3(char str1[], char str2[]){
    int cont = 0;
    
    while(*(str1) != '\0' && *(str2) != '\0'){
		
		if(*str1 == *str2){cont++;}
    }
    
    return cont;
}



int main(){
	
	int v[N];
	int m[N][N];
	carga(m);
	mostrar_matriz(m,N,N);
	resta(m,v);
	mostrar_v(v);
	
	return 0;
}
        

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

//Sin constante no funciona el pasaje de parametro por valor de la matriz
const int cant_c = 50;
const int longitud_str = 50;

void imprimir_vector(int vec[], int elementos){
    int i;

    for(i=0;i<elementos;i++){
        printf("[%d] ",vec[i]);
    }
    
    printf("\n");
}

void mostrar_matriz(int m[][cant_c], int f,int c) {
	
	for(int i = 0;i<f;i++){
		for(int j = 0;j<c;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
    printf("\n");
}

//Funciona siempre que la matriz no este sobredimensionada y que haya sido cargada con una funcion que tambien trabaje con paso de parametro por referencia.
void mostrar_matriz_referencia(int *m, int f,int c) {
	
	for(int i = 0;i<f;i++){
		for(int j = 0;j<c;j++){
			printf("%d ",*(m+(i*c)+j));
		}
		printf("\n");
	}
    printf("\n");
}

void cargar_v(int v[],int N, int menor, int mayor){
	int semilla = time(NULL);
	srand(semilla);
	
	for(int i = 0;i<N;i++){
		v[i] = rand() % (mayor-menor+1) + menor;
	}	
}

void cargar_m(int m[][cant_c],int f,int c){
	int semilla = time(NULL);
	srand(semilla);
	
	for(int i = 0;i<f;i++){
		for(int j = 0;j<c;j++){
			m[i][j] = rand() % 30;
		}
	}	
}

void cargar_m_referencia(int *m,int f,int c){
	int semilla = time(NULL);
	srand(semilla);

	for(int i = 0;i<f;i++){
		for(int j = 0;j<c;j++){
			*(m+(i*c)+j) = rand() % 30;
		}
	}
}
	

//Ejercicio 1
int suma_elementos(int matriz[][cant_c]){
	
	int suma = 0;
	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<4;j++){
			suma += matriz[i][j];
		}
	}	
	return suma;
}

//Ejercicio 1 Ver puntero
int suma_elementos_referencia(int *m){
	
	int suma = 0;
	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<4;j++){
			suma += *(m+(i*4)+j);
		}
	}	
	return suma;
}

//Ejercicio 2:
void suma_filas_columnas(int matriz[][cant_c],int vec_f[],int vec_c[]){
	
	for(int f = 0;f<3;f++){
		for(int c = 0;c<3;c++){
			vec_f[f] += matriz[f][c];
		}
	}
	
	for(int c = 0;c<3;c++){
		for(int f = 0;f<3;f++){
			vec_c[c] += matriz[f][c];
		}
	}
}

//Ejercicio 3:
void permutacion(int matriz[][cant_c],int f,int c){
    
    int aux[f][c];
    
    for(int f = 0;f<3;f++){
		for(int c = 0;c<3;c++){
	        aux[c][f] = matriz[f][c];		
		}
	}
    
    for(int f = 0;f<3;f++){
		for(int c = 0;c<3;c++){
	        matriz[f][c] = aux[f][c];		
		}
	}
}

//Ejercicio 5:
void cargar_tensor_datos(char t[][cant_c][longitud_str]){
    int cant;
    
    for(int f = 0;f<5;f++){
		for(int c = 0;c<3;c++){
            
           if(c==0){
               printf("Introduzca el nombre: ");
               fgets(t[f][c],20,stdin);
               
           } 
           else if(c==1){
               printf("Introduzca el apellido: ");
               fgets(t[f][c],20,stdin);
            
           }
           else{
               printf("Introduzca el dni: ");
               fgets(t[f][c],20,stdin);
           }
           printf("\n");
           cant = strlen(t[f][c]);
           t[f][c][cant-1] = '\0';
		}
	}
}

void busqueda_x_dni(char t[][cant_c][longitud_str], char dni[]){
    
    bool res = false;
    
    for(int f = 0;f<5;f++){
        if(strcmp(&t[f][2][0],dni) == 0){
            res = true;
            printf("El nombre y apellido es: %s %s", &t[f][0][0],&t[f][1][0]);
        }
	}
    
    if(res == false){printf("Error!! No se ha encontrado el dni.\n");}
}


int main(){
	
	char t[5][cant_c][longitud_str];
	cargar_tensor_datos(t);
    
    busqueda_x_dni(t,"39433113");
	
	
	return 0;
}

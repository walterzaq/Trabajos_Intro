#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


//UTILIDADES:

void cargar_v(int v[],int N, int menor, int mayor){
	int semilla = time(NULL);
	srand(semilla);
	
	for(int i = 0;i<N;i++){
		v[i] = rand() % (mayor-menor+1) + menor;
	}	
}

void mostrar_v(int v[],int N){
	
	for(int i = 0;i<N;i++){
		printf("[%d] ",v[i]);
	}	
	printf("\n\n");
}



//ALGORITMOS DE ORDENAMIENTO Y BUSQUEDA:

void ord_burbuja(int v[],int cant){
	
	int aux;
	for(int i = 0;i<cant;i++){
		for(int j = 1;j<cant;j++){
			
			if(v[j] < v[j-1]){
				aux = v[j];
				v[j] = v[j-1];
				v[j-1] = aux;
			}	
		}
	}	
}

void ord_burbuja_mejorada(int v[],int cant){
	int aux;
	bool bandera = true;
	int i = 0;
	
	while(i<cant && bandera == true){
		
		bandera = false;
		
		for(int j = 1;j<cant;j++){
			
			if(v[j] < v[j-1]){
				aux = v[j];
				v[j] = v[j-1];
				v[j-1] = aux;
				bandera = true;
			}	
		}
		i++;
	}	
}

void ord_insercion(int v[],int cant){
	
	int aux;
	int j;
	
	for(int i = 1;i<cant;i++){
		j = i;
		
		while(j>=1 && v[j] < v[j-1]){
			aux = v[j];
			v[j] = v[j-1];
			v[j-1] = aux;
			j--;
		}
	}	
}


void ord_seleccion(int v[],int cant){
	
	int aux;
	int max;
	int pos_max;
	
	
	for(int i = cant-1;i>=1;i--){
		
		for(int j = 0;j<=i;j++){
			
			if(j == 0){
				max = v[j];
				pos_max = 0;
			}	
			else{
				if(v[j] > max){
					max = v[j];
					pos_max = j;
				}	
			}	
	    }
	    aux = v[i];
		v[i] = v[pos_max];
		v[pos_max] = aux;
	}	
}


int busq_secuencial(int v[],int cant,int valor){
	
	int posicion = -1; //Si la funcion devuelve una posicion -1 es porque no pudo encontrar el valor en el arreglo.
	int i = 0;
	
	while(i<cant && posicion == -1){
		if(v[i] == valor){posicion = i;}
		i++;
	}
	
	return posicion;
}

//RECORDA QUE PARA BUSQUEDA BINARIA ES REQUISITO QUE EL VECTOR ESTE PREVIAMENTE ORDENADO DE MENOR A MAYOR, A DIFERENCIA DE LA BUSQUEDA SECUENCIAL.

int busq_binaria(int v[],int cant,int valor){
	
	int posicion = -1; //Si la funcion devuelve una posicion -1 es porque no pudo encontrar el valor en el arreglo.
	bool bandera = true;
	
	int inicio = 0, fin = cant-1, media;
	
	while(posicion == -1 && bandera == true){
		
		media = (inicio + fin) /2;
		
		if(v[media] > valor){fin = media-1;}
		else if (v[media] < valor){inicio = media+1;}
		else{posicion = media;}
		
		if(inicio == fin && v[inicio] != valor){
			bandera = false;
		}
	}
	
	return posicion;
}

//AHORA SI, EJERCICIOS DEL TRABAJO. EJERCICIO 1:

void ordenamiento_as_o_des(int v[],char orden){
	
	if(orden == 'A'){
		ord_insercion(v,20);
	}
	else if(orden == 'D'){
		
		int aux;
		bool bandera = true;
		int i = 0;
		
		while(i<20 && bandera == true){
			
			bandera = false;
			
			for(int j = 1;j<20;j++){
				
				if(v[j] > v[j-1]){
					aux = v[j];
					v[j] = v[j-1];
					v[j-1] = aux;
					bandera = true;
				}	
			}
			i++;
		}	
	}	
}

//EJERCICIO 2 (PARA ESTE EJERCICIO SE DEBE TRABAJAR SOBRE UN VECTOR SOBREDIMENSIONADO):

int busq_binaria_modificada(int v[],int cant,int valor){
	
	int posicion = -1; //Si la funcion devuelve una posicion -1 es porque no pudo encontrar el valor en el arreglo.
	bool bandera = true;
	
	int inicio = 0, fin = cant-1, media;
	
	while(posicion == -1 && bandera == true){
		
		media = (inicio + fin) /2;
		
		if(v[media] > valor){fin = media-1;}
		else if (v[media] < valor){inicio = media+1;}
		else{posicion = media;}
		
		if(inicio == fin && v[inicio] != valor){
			bandera = false;
		}
	}
	
	
	if(bandera == false){
			
		for(int i = cant;i>media;i--){
			v[i] = v[i-1];
		}
		
		if(v[media] < valor){
			v[media+1] = valor;
			posicion = media+1;
		}
		else{
			v[media] = valor;
			posicion = media;
		}
	}	
	
	return posicion;
}

//EJERCICIO 3:

void ord_por_legajo(int legajo[],int calificacion[],int n){
	
	int aux_leg, aux_cal; 
	
	for(int i = 0;i<n;i++){
		for(int j = 1;j<n;j++){
			
			if(legajo[j] < legajo[j-1]){
				aux_leg = legajo[j];
				legajo[j] = legajo[j-1];
				legajo[j-1] = aux_leg;
				
				aux_cal = calificacion[j];
				calificacion[j] = calificacion[j-1];
				calificacion[j-1] = aux_cal;
				
			}	
		}
	}	
	
	printf("LEGAJO    CALIFICACION\n");
	for(int j = 0;j<n;j++){
		printf("%d          %d\n",legajo[j],calificacion[j]);
	}
}



int main(){
	
	
	
	return 0;
}

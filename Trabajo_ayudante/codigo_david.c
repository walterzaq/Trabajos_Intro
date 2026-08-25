#include <stdio.h>

#define MAX 15 // Capacidad máxima del vector fijo

// 1. Función para agregar un elemento al final
// Recibe la cantidad actual como un entero normal y retorna la nueva cantidad
int agregar(int datos[], int cant, int valor) {
    if (cant < MAX) {
        datos[cant] = valor; // Guarda en la posición libre actual
        cant++;              // Incrementa la cantidad local
        printf("Agregado %d al final.\n", valor);
    } else {
        printf("Error: Vector lleno.\n");
    }
    return cant; // Devuelve la cantidad actualizada al main
}

// 2. Función para insertar un elemento en una posición específica
int insertar(int datos[], int cant, int pos, int valor) {
    if (cant >= MAX) {
        printf("Error: Vector lleno.\n");
        return cant;
    }
    if (pos < 0 || pos > cant) {
        printf("Error: Posicion invalida.\n");
        return cant;
    }

    // Mueve los elementos a la derecha para abrir el espacio
    for (int i = cant; i > pos; i--) {
        datos[i] = datos[i - 1];
    }

    datos[pos] = valor; // Guarda el valor en la posición elegida
    cant++;             // Incrementa la cantidad local
    printf("Insertado %d en posicion %d.\n", valor, pos);
    
    return cant; // Devuelve la cantidad actualizada
}

// 3. Función para eliminar un elemento por su POSICIÓN
int eliminarPorPosicion(int datos[], int cant, int pos) {
    if (pos < 0 || pos >= cant) {
        printf("Error: Posicion invalida para eliminar.\n");
        return cant;
    }

    // Mueve los elementos a la izquierda para tapar el hueco
    for (int i = pos; i < cant - 1; i++) {
        datos[i] = datos[i + 1];
    }

    cant--; // Reduce la cantidad local
    printf("Eliminado elemento en posicion %d.\n", pos);
    
    return cant; // Devuelve la cantidad actualizada
}

// Función auxiliar para mostrar el estado actual del vector
void mostrar(int datos[], int cant) {
    printf("Vector [%d/%d]: ", cant, MAX);
    for (int i = 0; i < cant; i++) {
        printf("%d ", datos[i]);
    }
    printf("\n\n");
}

int main() {
    int miVector[MAX];
    int cantidad = 0; // Al inicio el vector está vacío

    printf("--- VERSION ULTRA SIMPLE (SIN PUNTEROS) ---\n\n");

    // 1. Prueba de Agregar al final
    // NOTA: Guardamos el resultado de la función para actualizar la variable 'cantidad'
    cantidad = agregar(miVector, cantidad, 10);
    cantidad = agregar(miVector, cantidad, 20);
    cantidad = agregar(miVector, cantidad, 30);
    mostrar(miVector, cantidad); // Muestra: 10 20 30

    // 2. Prueba de Insertar en la posición 1
    cantidad = insertar(miVector, cantidad, 1, 99);
    mostrar(miVector, cantidad); // Muestra: 10 99 20 30

    // 3. Prueba de Eliminar en la posición 2
    cantidad = eliminarPorPosicion(miVector, cantidad, 2);
    mostrar(miVector, cantidad); // Muestra: 10 99 30

    return 0;
}
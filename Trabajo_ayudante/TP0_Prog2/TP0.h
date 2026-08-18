#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#ifndef TP0_Repaso
#define TP0_Repaso

// Ejercicio 1

enum Referencia
{
    INTERNO = -1,
    EN_CIRCUNFERENCIA,
    EXTERNO
};

enum Referencia dondeEstaElPunto(int xc, int yc, int rc, int xp, int yp);

//Acordate de buscar sobre tipos de archivos enum para armarte una definicion y volcarla en avanzados.

// Ejercicio 2

bool digitoEnNumero(long n, short d);


// Ejercicio 3

typedef struct{
    int x, y;
}Punto;

enum Referencia dondeEstaElPuntoBis(Punto centroC, int rc, Punto p);

// Ejercicio 4

#define TAMANO_STRING 50
#define CANT_JUGADORES 4

typedef struct{
    char nombre[TAMANO_STRING];
    int edad, partidosJugados;
}Jugador;

Jugador *jugadoresOrdenadosPorCantDePartidos(Jugador equipo[]);
Jugador *jugadoresOrdenadosPorEdad(Jugador equipo[]);
float promedioDePartidosJugados(Jugador equipo[], int edad);

// Ejercicio 5

#define CANT_PISOS 8
#define CANT_DEPARTAMENTOS 5

typedef struct{
    short piso;
    char depto;
} Vivienda;


int pisoConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
int cantidadDeViviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
float promedioHabitantesPorVivienda(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
Vivienda viviendaConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);


#endif //TP0_Repaso

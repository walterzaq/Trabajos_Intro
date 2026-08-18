#include "TP0.h"

//Ejercicio 1:

enum Referencia dondeEstaElPunto(int xc, int yc, int rc, int xp, int yp){

    int resultado = pow((xp-xc),2) + pow((yp-yc),2);

    if (resultado == pow(rc,2)){return EN_CIRCUNFERENCIA;}
    else if (resultado < pow(rc,2)){return INTERNO;}
    else{return EXTERNO;}
}

//Ejercicio 2:

bool digitoEnNumero(long n, short d){

    int band_1 = 0,band_2 = 0;

    while (band_1 == 0 && band_2 == 0){

            if (n%10 == d) {band_1 = 1;}

            else{
                n = n/10;

                if (n == 0) {band_2 = 1;}
            }
    }

    if (band_1 == 1) {return true;}
    else {return false;}
}

// Ejercicio 3

enum Referencia dondeEstaElPuntoBis(Punto centroC, int rc, Punto p){

    int resultado = pow(p.x-centroC.x,2) + pow(p.y-centroC.y,2);

    if (resultado == pow(rc,2)){return EN_CIRCUNFERENCIA;}
    else if (resultado < pow(rc,2)){return INTERNO;}
    else{return EXTERNO;}
}

// Ejercicio 4-a:

Jugador *jugadoresOrdenadosPorCantDePartidos(Jugador equipo[]){

    Jugador *p;

    int bandera = 0,i;
    Jugador aux;

    while (bandera == 0){

        bandera = 1;

        for (i=0;i<CANT_JUGADORES-1;i++){

                if (equipo[i].partidosJugados<equipo[i+1].partidosJugados){
                    aux = equipo[i];
                    equipo[i] = equipo[i+1];
                    equipo[i+1] = aux;

                    bandera = 0;
                }
        }

    }

    p = equipo;

    return p;
}

//4-b:

Jugador *jugadoresOrdenadosPorEdad(Jugador equipo[]){

    Jugador *p;

    int bandera = 0,i;
    Jugador aux;

    while (bandera == 0){

        bandera = 1;

        for (i=0;i<CANT_JUGADORES-1;i++){

                if (equipo[i].edad>equipo[i+1].edad){
                    aux = equipo[i];
                    equipo[i] = equipo[i+1];
                    equipo[i+1] = aux;

                    bandera = 0;
                }
        }

    }

    p = equipo;

    return p;
}

//4-c:

float promedioDePartidosJugados(Jugador equipo[], int edad){

    int i,contador = 0;
    float acumulador = 0;

    for (i=0;i<CANT_JUGADORES;i++){

        if (equipo[i].edad == edad){
            contador++;
            acumulador+=equipo[i].partidosJugados;
        }
    }

    if(contador != 0){
        float promedio = acumulador/contador;
        return promedio;
    }
    else{return 0.00;}
}

//Ejercici 5-a:

int cantidadDeViviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]){

    int f,c,contador = 0;

    for (f=0;f<CANT_PISOS;f++){

        for (c=0;c<CANT_DEPARTAMENTOS;c++){

            if (edificio[f][c] == 0) {

                contador++;
            }
        }
    }

    return contador;
}

//5-b:

float promedioHabitantesPorVivienda(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]){

    int f,c;
    float acumulador = 0;

    for (f=0;f<CANT_PISOS;f++){

        for (c=0;c<CANT_DEPARTAMENTOS;c++){

            acumulador+=edificio[f][c];
        }
    }

    float promedio = acumulador/(CANT_DEPARTAMENTOS*CANT_PISOS);
    return promedio;
}

//5-c:

int pisoConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]){

    int f,c,acumulador,cantmax,pisomax;

    for (f=0;f<CANT_PISOS;f++){

        acumulador = 0;

        for (c=0;c<CANT_DEPARTAMENTOS;c++){

                acumulador+=edificio[f][c];
        }

        if (f == 0) {
                cantmax = acumulador;
                pisomax = 1;
        }
        else{
            if (acumulador>cantmax) {
                    cantmax = acumulador;
                    pisomax = f+1;
            }
        }
    }
    return pisomax;
}

//5-d:

Vivienda viviendaConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]){

    int f,c,cantmax,piso;
    char dpto;


    for (f=0;f<CANT_PISOS;f++){

        for (c=0;c<CANT_DEPARTAMENTOS;c++){

            if (f == 0 && c == 0) {

                cantmax = edificio[f][c];
                piso = f+1;
                dpto = 'A';
            }

            else{
                if (edificio[f][c]> cantmax) {
                        cantmax = edificio[f][c];
                        piso = f+1;

                        if (c == 0) {dpto = 'A';}
                        else if (c == 1) {dpto = 'B';}
                        else if (c == 2) {dpto = 'C';}
                        else if (c == 3) {dpto = 'D';}
                        else if (c == 4) {dpto = 'E';}
                }
            }

        }
    }

    Vivienda vivimax;
    vivimax.depto = dpto;
    vivimax.piso = piso;
    return vivimax;
}







#include "TP0.h"

int main (int argc,char *argv[]){

    int f,c,semilla, edi[CANT_PISOS][CANT_DEPARTAMENTOS];

    semilla = time(NULL);
    srand(semilla);

    for (f=0;f<CANT_PISOS;f++){

        for (c=0;c<CANT_DEPARTAMENTOS;c++){

            edi[f][c] = rand() % 10;
            printf("%i ",edi[f][c]);
        }

        printf("\n");
    }

    Vivienda vivimax = viviendaConMasHabitantes(edi);

    printf("%i-%c \n", vivimax.piso,vivimax.depto);

    system("pause");
    system("cls");
    return 0;
}


/* Codigo util para carga de registros e impresion en pantalla de sus campos:

    Jugador equi[CANT_JUGADORES];

    int i;
    for (i=0;i<CANT_JUGADORES;i++){
        printf("Ingrese el nombre del jugador: ");
        fgets(equi[i].nombre,TAMANO_STRING,stdin);
        fflush(stdin);
        int cant = strlen(equi[i].nombre);
        equi[i].nombre[cant-1] = '\0';
        printf("Ingrese la edad del jugador: ");
        scanf("%i",&equi[i].edad);
        printf("Ingrese la cantidad de partidos jugados del jugador: ");
        scanf("%i",&equi[i].partidosJugados);
        fflush(stdin);
    }

    int k;
    printf("JUGADOR\t\tEDAD\t\tPARTIDOS\n");
    for (k=0;k<CANT_JUGADORES;k++){
        printf("%s\t\t%i\t\t%i\n",equi[k].nombre,equi[k].edad,equi[k].partidosJugados);
    }
*/

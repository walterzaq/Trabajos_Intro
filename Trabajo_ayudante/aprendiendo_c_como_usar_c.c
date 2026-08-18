#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/*

                                                                COMO PROGRAMAR EN C


SINTAXIS (cosas a tener en cuenta):

//Prohibido usar la "ñ", porque te va a tirar error. Y si la queres imprimir en pantalla, te va a tirar un simbolo raro. Lo mismo con las tildes.

El codigo se escribe todo con minusculas, las unicas que llevan mayusculas son las constantes simbolicas de las macro. Mayormente nos manejamos declarando variables
dentro de las funciones y definiendo estructuras de datos (tambien conocidas como tipo de valor definido por el usuario), en el programa principal.*/

system("pause");
system("cls");

/*Habra que incluir en toda funcion main al menos la funion system("pause") para detener el programa a la espera de que el usuario presione enter. Es la manera correcta de
trabajar, aunque no se por que aun. system("cls") es inutil en C porque no te limpia la pantalla, pero la podes implementar igual porque te hace 2 saltos de linea al menos*/

return 0;

/*Si bien la funcion "main" es una funcion especial, tambien es una funcion. Y como toda funcion, debe llevar un return al final. LLeva "return 0" especificamente (esto
se relaciona con informar que el programa principal se ejecuto correctamente)*/


if (datos == NULL){
        printf("El archivo no se pudo abrir. Cerrando programa");
        return -1;

/*Siempe que se abre un archivo hay que incluir esta estructura condicional en caso de fopen falle y no se pueda abrir el archivo. En ese caso la funcion retorna -1 y el
programa finaliza devolviendo ese valor para indicar que no se ejecuto correctamente.*/


/*GITHUB:


Respecto al uso de github y los repositorios remotos. Ya creaste una carpeta local que esta sincronzada con el repositorio remoto del grupo. Asi que ahora para
para participar con los trabajos solo tenes que abrir dicha carpeta desde el visual studio code. Despues vas a tener que recordar como se actualizaba el repositorio
remoto a partir de los cambios generados en el local.

METODO DE TRABAJO (Archivos .h y.c):

Para trabajar de la manera mas prolija y eficiente en C, vamos a basarnos en un metodo particular. Vamos a separar lo que es la "definicion" de las funciones del programa (qué hace)
de la "implementacion" de las mismas (cómo lo hace).
  En lo que respecta a la definicion, vamos a utilizar "archivos de cabecera", de extension ".h" Tambien conocidos como headers. El header va a ser digamos el rostro o la parte mas
superficial del programa, y alli vamos a definir y especificar las funciones que queremos que sean visibles para otros archivos (luego de importar el header en ellos). La definicion
se basa, particularmente, en nombrar cada funcion e indicar que datos recibe como parametros y qué datos devuelve. La definicion va a ir acompañada de una especificacion, es decir,
comentarios por debajo o arriba de la funcion que describen lo que hace la funcion, que datos recibe y devuelve, entre otras cosas.
  Para la implementacion vamos a usar archivos con extension ".c", en los cuales vamos a importar headers para poder referenciar sus funciones y tipos de datos definidos x el usuario,
con el interes de construir su funcionamiento (como lo hace). Alli vamos a implementar la funcionalidad de dichas funciones.
  Luego de todo esto se emplea otro archivo de extension "c.", el cual se va a utilizar para integrar todas las funciones que definimos e implementamos, ya sea para probarlas o para
constituir un programa principal y exportarlo. Respecto al procedimiento, aqui se importarian solo los headers necesarios, mas no el archivo de implementacion. Esto funciona porque
el compilador interpreta que las funciones definidas en el header tienen su implementacion en el archivo de extension ".c" correspondiente, y no hace falta referenciar a este ultimo.
Pero para que esto funcione, sera necesario incluir la ruta exacta de cada archivo de implementacion necesario dentro de la lista "args", en el archivo tasks.json. Las rutas van entre
comillas, con "\\" entre cada carpeta y agregando una coma al final. Pero si es el ultimo elemento de la lista, no llevara coma al final.


COMPILADOR:

Para poder ejecutar el programa en C, el IDE primero va a crear el archivo ejecutable ".exe" (llevando el codigo fuente a lenguaje de maquina) y luego va a proceder a
ejecutarlo. Si existe algun error de sintaxis en el codigo, el compilador no va a crear el ejecutable, y te va a decir donde se localiza el error. Tenes que seleccionar
"Run C/C++ file" desde el icono play en la esquina superior derecha. Si el programa tiene algún error lógico o, durante la ejecución del programa, te vas a poder ayudar a
localizarlo con el debugger*/

//IMPORTANTE: A veces el compilador te puede tirar errores y no especificar a que se debe, especialmente cuando estas trabajando con headers y demas. Si la ventana "Build messages" no te brinda info
//podes consultar tambien en la ventana "Build log".

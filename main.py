#Asi se escriben notas

#"" o '' para escribir strings


#Las funciones se escriben con la palabra reservada "def", se ponen 2 puntos luego de los paramtros y no usan llaves.
#Fijate que las instrucciones no llevan punto y coma.
#De paso acordate que las funciones tienen un encabezado y un cuerpo.
#Para ejecutar una funcion en esta materia, no es necesario crear un archivo aparte que utilice el codigo implementado. Para los trabajos nada mas se entregan las funciones. Y si necesitas probarlas, lo 
#podes hacer en mismo archivo, debajo de la funcion misma.
def factoriale():

    #Recorda que para division entera se utiliza el operador "//". Si utilizas el operador "/" el resultado de la division va a ser un numero decimal, aunque ambos numeros sean enteros.
    #** se usa para indicar potencia. % se usa para indicar el resto de una division. 
    #Las variables empleadas para datos de punto flotante son float. Los strings se representan con "" o ''. Y si queres generar un string que tiene varias lineas de codigo, podes usar """ o '''.
    #Las cadenas de caracteres se pueden concatenar utilizando el operador "+". Y para repetir una cadena de caracteres un numero determinado de veces, se puede utilizar el operador "*".


    #IDENTIFICADORES: Un identificador comienza con una letra o con guión bajo (_) y luego sigue con una secuencia de letras, números y guiones bajos. Los espacios no están permitidos dentro de los 
    #identificadores. Y Python sabe distinguir entre mayusculas y minusculas.

    i = 25
    #Asi se muestra un mensaje en pantalla. 
    print("Drogaaaa")
    #Asi se pide un dato al usuario. Si necesitas pasar variables al print, tenes que ir separando valores con coma.
    dato_ingresado = input("Ingrese un numero para calcular su factorial:")
    #Asi se convierte un string a un numero entero. Es necesario hacer esto porque el dato ingresado por el usuario SE GUARDA COMO UN STRING, y para hacer operaciones matematicas con ese dato, es necesario 
    #convertirlo a un numero.
    dato_ingresado = int(dato_ingresado)

    # te muestro las palabras reservadas en python:
    #   False    class   finally    is  return
    #   None    continue    for lambda  try
    #   True    def     from    nonlocal    while
    #   and     del     global  not     with
    #   as  elif    if  or  yield
    #   assert  else    import  pass
    #   break   except in   raise



    #VAS POR EL CAPUTILO 3: FUNCIONES PERO ANTES PONETE A REVISAR TRABAJOS PRACTICOS. LLEGA HASTA CONDICIONALES Y CICLOS.
   

    #ESTRUCTURAS LOGICAS DE CONTROL: Las estructuras lógicas de control determinan el orden y flujo de ejecución en un programa. En Python, las principales estructuras lógicas de control son...
    #1. Estructura condicional: Permite ejecutar un bloque de código si se cumple una condición. Se utiliza la palabra reservada "if" seguida de la condición y dos puntos.
    #2. Estructura de selección múltiple: Permite ejecutar diferentes bloques de código dependiendo del valor de verad de la condicion. Se utiliza la palabra reservada "if" seguida de la primera 
    #condición, luego "elif" para las condiciones adicionales y "else" para el bloque de código que se ejecuta si ninguna de las condiciones anteriores se cumple.
    #3. Estructura de repetición: Permite ejecutar un bloque de código varias veces. En Python, se utilizan principalmente dos estructuras de repetición: "for" y "while". El "for" se utiliza para iterar 
    #sobre un conjunto de datos, mientras que el "while" se ejecuta mientras se cumpla una condición. A diferencia del while, al utilizar el for podemos saber de antemano cuantas veces se va a ejecutar 
    #el bloque de codigo.



    #4. Estructura de control de excepciones: Permite manejar errores y excepciones que pueden ocurrir durante la ejecución de un programa. Se utiliza la palabra reservada "try" seguida del bloque de código que se desea ejecutar, y luego "except" para manejar las excepciones que puedan ocurrir.

    #Un programa construido solamente a partir de una combinacion de estas estructuras lógicas de control se dice que obedece a un paradigma de programacion estructurada. 
   








    #Asi se hace un ciclo for. El primer parametro es la variable de control del ciclo/ variable iteradora, el segundo parametro es el valor inicial de esa variable, y el tercer parametro es el valor final 
    #de esa variable. El ciclo se ejecuta mientras la variable de control sea menor o igual al valor final.
    for i in range(1,dato_ingresado+1):
        #Asi se hace una multiplicacion. El resultado de la multiplicacion se guarda en la variable que se le asigna a la izquierda del igual.
        dato_ingresado *= i 
    #Asi se muestra un mensaje en pantalla con el resultado de la operacion. Para mostrar el resultado de una variable, se pone esa variable entre comas dentro del print.
    print("El factorial del numero ingresado es:", dato_ingresado)

#Asi llamas a la funcion que creaste.
factoriale()

#Algunas funciones predefinidas en Python son:

abs(10) #valor absoluto
max(5, 9, -3) #maximo entre los numeros que se le pasan como parametros. 
min(5, 9, -3) #minimo entre los numeros que se le pasan como parametros.
len("abcd") #cantidad de caracteres que tiene el string que se le pasa como parametro. 



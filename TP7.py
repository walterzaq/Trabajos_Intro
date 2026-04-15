from os import system

#Ejercicio 1:

def mostrar_palabras():
    i = ""
    while i != "parar":
        palabra = input("Ingrese la palabra para mostrarla en pantalla (Ingrese *parar* para salir):")
        if palabra != "parar":
            print(palabra)
        else:
            print("---TERMINADO---")
            i = "parar"
































#Ejercicio 2:

def promedio_parcial():
    i = 0
    total = 0
    incrementador = 0
    print("Bienvenido!! Vamos a calcular el promedio de las notas de sus parciales. A continuación, ingrese en forma sucesiva sus notas. Cuando haya terminado, presione -1 para calcular el promedio.")
    while i != -1:
        i = int(input("Ingrese la nota del parcial (presione -1 si a terminado de cargar las notas)"))
        if i != -1:
            total += i
            incrementador += 1
        else:
            print("Su promedio es de:", total//incrementador)
































#Ejercicio 3:
       
def validacion():
    i = "900"
    while int(i) < 1 or int(i) > 100 or i.isdigit() == False:
        i = input("Ingrese un valor numerico entre 1 y 100:")
        if i.isdigit() == False:
            print("El dato ingresado no es numerico. Intente nuevamente.")
            i = "900"
        elif int(i) < 1 or int(i) > 100:
            print("El número ingresado esta fuera del rango permitido. Intente nuevamente.")
        else:
            print(i, "es valido. Gracias!")
        






























#Ejercicio 7

def menu():
    opcion = 3
    while opcion != 4:
        opcion = int(input("""**********MI PROGRAMA**********
                1. Saludar.
                2. Informar temperatura. 
                3. Mostrar nombre de materia.
                4. Salir. 
             
                Seleccione una opción [1-4]:"""))
        
        if opcion != 4:
            input("           PRESIONE ENTER PARA CONTINUAR")
            system("cls")
            #Funcion para limpiar la terminal. Para usarla tener que usar la instruccion from os import system.
        else:
            system("cls")
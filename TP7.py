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
































#Ejercicio 2(con for)

def promedio_parcial():
    acumulador = 0
    nota = 0
    cant = int(input("Para calcular el promedio de sus parciales, ingrese la cantidad de notas: "))
    for i in range(1,cant+1):
        nota = int(input(f"\nIngrese la nota del {i}° parcial: "))
        acumulador += nota

    promedio = acumulador/cant
    print()
    print("Su promedio es de:", promedio)
    if(promedio >= 4):
        print("Usted esta aprobado!!")   
    else:
        print("Usted ha desaprobado.") 






























#Ejercicio 2(con while)

def promedio_parcial():
    i = 1
    acumulador = 0
    nota = 0
    cant = int(input("Para calcular el promedio de sus parciales, ingrese la cantidad de notas: "))
    while (i<=cant):
        nota = int(input(f"\nIngrese la nota del {i}° parcial: "))
        acumulador += nota
        i+=1

    promedio = acumulador/cant
    print()
    print("Su promedio es de:", promedio)
    if(promedio >= 4):
        print("Usted esta aprobado!!")   
    else:
        print("Usted ha desaprobado.") 






























#Ejercicio 2(con while con centinela)

def promedio_parcial():
    i = 0
    acumulador = 0
    contador = 0
    print("Para calcular el promedio de sus parciales, ingrese en forma sucesiva sus notas (ingrese -1 para terminar).")

    while (i != -1):
        i = int(input("\nIngrese una nota de parcial (ingrese -1 si a terminado de cargar las notas): "))
        
        if(i != -1):
            acumulador += i
            contador += 1


    promedio = acumulador/contador
    print("Su promedio es de:", promedio)
    if(promedio >= 4):
        print("Usted esta aprobado!!")   
    else:
        print("Usted ha desaprobado.") 

























         










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
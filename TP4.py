#Ejercicio 1:

def n_pila():
    nombre  = input("Ingresa tu nombre: ")
    cantidad = len(nombre)
    print("Hola", nombre ,", tu nombre tiene", cantidad, "letras")





















#Ejercicio 2:

def valor_absoluto():
    num = int(input("Ingrese el num para calcularlo: "))
    print()
    v_abs = abs(num)
    print("El valor absoluto de", num,"es", v_abs)



















#Ejercicio 3:

def valor_absoluto():
    numero1 = int(input("Ingrese el primer numero entero: "))
    numero2 = int(input("Ingrese el segundo numero entero: "))
    print()
    total = numero1 + numero2
    print("El resultado de la suma es",total)


















#Ejercicio 4:

def perimetro(b,a):
    resultado = 2*(b+a)
    print("Su perímetro es:", resultado)













#Ejercicio 5:    

def reporte():
    apellido = input("Introduzca su apellido: ")
    nota_1parcial = int(input("Introduzca la nota del primer parcial: "))
    nota_2parcial = int(input("Introduzca la nota del segundo parcial: "))
    promedio = (nota_1parcial + nota_2parcial)/2
    
    print("Alumno",apellido,":\n")
    print("- Primer parcial:",nota_1parcial,".\n")
    print("- Segundo parcial:",nota_2parcial,".\n")
    print("- Promedio:",promedio,".")


















#Ejercicio 6:    

def potencia():
    base = int(input("Introduzca la base: "))
    exponente = int(input("Introduzca el exponente: "))
    potencia = base**exponente
    print("El resultado es",potencia)




















#Ejercicio 7:    

def conversion_horas():
    cant_horas = int(input("Ingrese la cantidad de horas: "))
    cant_minutos = cant_horas*60
    cant_segundos = cant_minutos*60
    print("La cantidad de minutos es:",cant_minutos)
    print("La cantidad de segundos es:",cant_segundos)



"""
Pide al usuario un número con decimales y muestra (ayudate con round()):
- El número redondeado hacia el entero más cercano
- El número redondeado con 2 decimales



Genera un programa que solicite al usuario un número entero (de 0 a 255) e imprima
en pantalla el número convertido a binario. 
"""
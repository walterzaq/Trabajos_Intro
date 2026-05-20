"""
1. Crea una función que reciba dos números como parámetro, y muestre en pantalla la suma aritmética de ambos. Invoca a la función con dos números leídos desde teclado. 
"""

def suma_aritmetica(num1,num2):
	suma = num1 + num2
	print("La suma aritmetica entre ambos es: ",suma)



num1 = int(input("Ingrese el primer numero: "))
num2 = int(input("Ingrese el segunda numero: "))

suma_aritmetica(num1,num2)



























"""
2. Modifica el script del ejercicio anterior para que la función retorne el resultado en vez de solo mostrarlo. El programa debe seguir mostrando el resultado en pantalla. 	
"""

def suma_aritmetica(num1,num2):
	suma = num1 + num2
	print("La suma aritmetica entre ambos es: ",suma)
	return suma



num1 = int(input("Ingrese el primer numero: "))
num2 = int(input("Ingrese el segunda numero: "))

suma_aritmetica(num1,num2)



































"""
3. Crea una función que reciba un string como parámetro, y retorne la cantidad de letras que posee. Luego, utiliza la función para escribir un programa que solicite ingresar el nombre del usuario, y luego muestre 
en pantalla cuántas letras tiene ese nombre. 
"""

def cant_letras(cadena):
	letras = len(cadena)
	return letras



nombre = input("Ingrese su nombre: ")

cantidad = cant_letras(nombre)

print("La cantidad de letras del nombre es: ",cantidad)

































"""
5. Crea una función que reciba un string como parámetro, y retorna el mismo string, pero con todas las letras convertidas a mayúsculas.
6.Modifica la función del ejercicio anterior para que retorne dos versiones del string recibido como parámetro: primero la versión en minúsculas, y luego la versión en mayúsculas.  
"""
def string_modificado(cadena):
	cadena_may = cadena.upper()
	cadena_min = cadena.lower()
	cadena_completa = cadena_min + " " + cadena_may
	return cadena_completa
	
cadena = input("Ingrese una cadena de caracteres: ")

resultado = string_modificado(cadena)

print("El resultado es:",resultado)

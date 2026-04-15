#Ejercicio 1
def primeros_100_positivos():
	for n in range(1,101):
		print(n,end=" ")





















#Ejercicio 2
def mostrar_pares():
	for n in range(1,101):
		if(n%2 == 0):
			print(n,end=" ")

























#Ejercicio 3
def acumular_numeros():
	acumulador = 0
	for n in range(75,151):
		acumulador += n
	print("El resultado es ",acumulador)
			
			




















#Ejercicio 4
def calcular_factorial():
	num = int(input("Ingrese un numero entero: "))
	factorial = 1
	for n in range(1,num+1):
		factorial*=n
	print("El factorial de",num,"es igual a", factorial)
	





















#Ejercicio 5
def numeros_signados():
	num = 0
	for n in range(1,11):
		num = int(input("Ingrese un numero: "))
		#Recordar que input no admite mas de un parametro.
		
		if(num == 0):
			print("El numero es igual a 0")
		elif(num > 0):
			print("El numero es positivo")
		else:
			print("El numero es negativo")






















#Ejercicio 6
def numero_maximo():
	num = int(input("Ingrese un numero: "))
	maximo = num
	pos = 1
	for n in range(2,11):
		num = int(input("Ingrese un numero: "))
		if(num > maximo):
			maximo = num
			pos = n
	
	print("El mayor numero ingresado es",maximo,"y lo ingresaste en la posicion",pos)





























#Ejercicio 8
def precipitaciones():
	print("Ingrese la precipitacion del dia 1 (en ml).")
	ml = int(input("Respuesta: "))
	maximo = ml
	dia = 1
	acumulador = 0
	for n in range(2,8):
		print("Ingrese la precipitacion del dia",n,"(en ml).")
		ml = int(input("Respuesta: "))
		if(ml > maximo):
			maximo = ml
			dia = n
		acumulador += ml
	
	promedio = acumulador/7
	print("El promedio de precipitaciones fue de",promedio,"ml diarios.") 
	print("El día de más precipitaciones fue el",end=" ")

	if(dia == 1):
		print("Domingo")
	elif(dia == 2):
		print("Lunes")
	elif(dia == 3):
		print("Martes")
	elif(dia == 4):
		print("Miercoles")
	elif(dia == 5):
		print("Jueves")
	elif(dia == 6):
		print("Viernes")
	else:
		print("Sabado")
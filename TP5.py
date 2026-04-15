#Ejercicio 1:


numero = int(input("Ingrese el numero: "))
print()
es_mayor = numero>10
if(es_mayor):
	print("El número es mayor que 10\n")
else:
	print("El número es menor o igual a 10\n")

print("Saludos!!!")

























#Ejercicio 2:

def maximo_minimo_que_10():
    numero = int(input("Ingrese el numero: "))
    print()
    if(numero>10):
        print("El número es maximo que 10\n")
    else: 
        print("Tu número",numero,"es minimo o igual que 10!\n")
    
    print("Saludos!!!")

























#Ejercicio 4:

numero1 = int(input("Ingrese el primer numero: "))
numero2 = int(input("Ingrese el segundo numero: "))
print()
if(numero1>numero2):
	print("El número",numero1,"es mayor que",numero2,"\n")
elif(numero2>numero1):
	print("El número",numero2,"es mayor que",numero1,"\n")
else:
	print("Los numeros son iguales!!!\n")



numero1 = int(input("Ingrese el primer numero: "))






















#Ejercicio 5:

def numero_signado():
    numero = int(input("Ingrese el numero: "))
    print()
    if(numero>0):
        print("El número",numero,"es positivo\n")
    elif(numero<0):
        print("El número",numero,"es negativo\n")
    else:
        print("El número ingresado es 0!!!")
























#Ejercicio 6:

def nombres_dias():
    num = int(input("Ingrese el numero del dia: "))
    print("El nombre del dia es ",end="")
    if(num == 1):
        print("Domingo")
    elif(num == 2):
        print("Lunes")
    elif(num == 3):
        print("Martes")
    elif(num == 4):
        print("Miercoles")
    elif(num == 5):
        print("Jueves")
    elif(num == 6):
        print("Viernes")
    elif(num == 7):
        print("Sabado")
























#Ejercicio 7:

def situacion_alumno():
    print("Bienvenido al sistema de situacion del alumnado")

    p1 = int(input("Ingrese la nota del primer parcial: "))
    p2 = int(input("Ingrese la nota del segundo parcial: "))
    promedio = (p1+p2)/2

    print("La situacion del alumno es: ",end="")

    if(p1 < 4 or p2 < 4):
        print("Libre")
    else:
        if(promedio >= 7):
            print("Promovido")
        else:
            print("Regular")
    
    print("El promedio del alumno es: ",promedio)



























#Ejercicio 8:

def clasificacion_triangulos():

    l1 = int(input("Ingrese el primer lado: "))
    l2 = int(input("Ingrese el segundo lado: "))
    l3 = int(input("Ingrese el tercer lado: "))

    if(l1 == l2 and l2 == l3):
        print("El triangulo es equilatero.")
    else:
        if(l1 == l2 or l1 == l3 or l2 == l3):
            print("El triangulo es isoceles.")
        else:
            print("El triangulo es escaleno.")
    























#Ejercicio 9:



dividendo = int(input("Ingrese el dividendo: "))
divisor = int(input("Ingrese el divisor: "))

if(divisor == 0):
	print("No se puede dividir entre 0!!")
else:
	resultado = dividendo//divisor
	print("El resultado es",resultado)
        






























#Ejercicio 9 del TP anterior:


numero1 = int(input("Ingrese el primer numero: "))
minimo = numero1
maximo = numero1

numero2 = int(input("Ingrese el segundo numero: "))

if(numero2<minimo):
	minimo = numero2
elif(numero2>maximo):
	maximo = numero2

numero3 = int(input("Ingrese el tercer numero: "))

if(numero3<minimo):
	minimo = numero3
elif(numero3>maximo):
	maximo = numero3

print()

print("El numero minimo es",minimo,"y el numero maximo es",maximo)


"""
  Crea un script que le solicite al usuario ingresar tres números y muestre por pantalla
  el número máximo y mínimo. 

"""










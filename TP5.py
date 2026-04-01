#Ejercicio 1:

def maximo_que_10():
    numero = int(input("Ingrese el numero: "))
    print()
    if(numero>10):
        print("El número es maximo que 10\n")
    
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

























#Ejercicio 3:

def numero_maximo():
    numero1 = int(input("Ingrese el primer numero: "))
    numero2 = int(input("Ingrese el segundo numero: "))
    print()
    if(numero1>numero2):
        print("El número",numero1,"es maximo que",numero2,"\n")
    elif(numero2>numero1):
        print("El número",numero2,"es maximo que",numero1,"\n")
    else:
        print("Los numeros son iguales!!!\n")

























#Ejercicio 4:

def numero_signado():
    numero = int(input("Ingrese el numero: "))
    print()
    if(numero>0):
        print("El número",numero,"es positivo\n")
    elif(numero<0):
        print("El número",numero,"es negativo\n")
    else:
        print("El número ingresado es 0!!!")

























#Ejercicio 9 del TP anterior:

def numero_maximo_minimo(): 
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



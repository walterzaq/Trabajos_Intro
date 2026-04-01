#Ejercicio 1:
def valor_absoluto():
    num = int(input("Ingrese el num para calcularlo"))
    num = abs(num)
    print("El valor absoluto de N es ", num)
    


















    
#Ejercicio 2:
def n_pila():
    nombre  = input("Ingresa tu nombre: ")
    cantidad = len(nombre)
    print("El nombre ", nombre ," tiene ", cantidad, " letras")


















    
#Ejercicio 3:    
def potencia():
    base = int(input("Introduci la base: "))
    exponente = int(input("Introduci el exponente: "))
    potencia = base**exponente
    print("El resultado es ",potencia)

















    
#Ejercicio 4:    
def perimetro(b,a):
    resultado = 2*(b+a)
    print("Su perímetro es:", resultado)



















        
#Ejercicio 5:    
def asignacion_m():
    b = 5
    a = 10

    b,a = a,b

    print("valor de b: ", b)
    print("valor de a: ", a)

asignacion_m()
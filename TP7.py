def num_positivos():
    for i in range(1,101):
        if i < 100:
            print(i, end=", ")
        else:
            print(i)
        
def num_positivos_pares():
    for i in range(1,101):
        
        if i % 2 == 0:
        
            if i < 100:
                print(i, end=", ")
            else:
                print(i)

def sum_numeros():
    total = 0
    for i in range(1,4):
        
        total +=i
        #A esto se le llamaba "acumulador". Es como un incrementador, que reutiliza un valor anterior (x +=1), pero que va sumando un valor distinto cada vez.
        
    print("El total de la suma es:", total)
    
def numero_factorial(n):
    num_fact = 1
    
    for i in range(1,n+1):
        
        num_fact *=i
        #Al acumulador se le puede poner una operacion de suma, resta, multiplicacion o division.
        
    print("El factorial del número es:", num_fact)

def numeros_enteros():
    print("Le pediremos ingresar 10 números enteros en forma sucesiva para indicarle si son negativos, positivos o iguales a 0")
    for i in range(10):
        entero = int(input("Ingrese un número:"))
        
        if entero == 0:
            print("El número ingresado es igual a 0")
        elif entero > 0:
            print("El número ingresado es positivo")
        else: 
            print("El número ingresado es negativo")
        
    print("Hasta la proximaaa")

def numero_maximo():
    print("Le pediremos ingresar 10 números enteros en forma sucesiva para indicarle cual es el numero maximo y en que posicion lo ingreso")
    
    for i in range(1,11):
        num_ingresado = int(input("Ingrese un número:"))
        #Mucho ojo acá, que me pusiste el input sin la funcion "int". Eso luego afecto tu programa porque imaginate que en el condicional luego se compararon dos strings
        #en lugar de compararse dos numeros. No sé en funcion de que pueden compararse dos strings de esa manera, pero por ahora no vale la pena indagar.
        
        if i == 1:
            maximo = num_ingresado
            posicion = i
        else:
            if num_ingresado > maximo:
                maximo = num_ingresado
                posicion = i
            
        
    print("El numero maximo ingresado es", maximo, "y lo ingresaste en la posicion", posicion)
    
def numero_maximo_minimo():
    print("Le pediremos ingresar 10 números enteros en forma sucesiva para indicarle cual es el numero maximo, el minimo y en que posicion los ingreso a ambos")
    
    for i in range(1,11):
        num_ingresado = int(input("Ingrese un número:"))
        #Mucho ojo acá, que me pusiste el input sin la funcion "int". Eso luego afecto tu programa porque imaginate que en el condicional luego se compararon dos strings
        #en lugar de compararse dos numeros. No sé en funcion de que pueden compararse dos strings de esa manera, pero por ahora no vale la pena indagar.
        
        if i == 1:
            maximo = num_ingresado
            minimo = num_ingresado
            posicion_max = i
            posicion_min = i
        else:
            if num_ingresado > maximo:
                maximo = num_ingresado
                posicion_max = i
                
            if num_ingresado < minimo:
                minimo = num_ingresado
                posicion_min = i
    
    print("El numero maximo ingresado es", maximo, "y lo ingresaste en la posicion", posicion_max)
    print("El numero mminimo ingresado es", minimo, "y lo ingresaste en la posicion", posicion_min)

def prom_preci_semana():
    total = 0
    ml_max = 0
    for i in range(1,8): 
        nom_dia = input("Indique el día donde va a ingresar los mililitros:")
        ml_lluvia_diario = int(input("Ingrese cantidad de mililitros de lluvia del día"))
        total += ml_lluvia_diario
        
        if i == 1:
            ml_max = ml_lluvia_diario
            dia_max = nom_dia
        else:
            if ml_lluvia_diario > ml_max:
                ml_max = ml_lluvia_diario
                dia_max = nom_dia
    
    print("El promedio de precipitaciones fue de", total/7, "mls. diarios.")
    print("El día de más precipitaciones fue el", dia_max)
    

def prom_preci_semana_alternativo():
    total = 0
    ml_max = 0
    print("Le vamos a pedir que introduzca en forma sucesiva la cantidad de mls diarios en la semana, comenzando por el dia Domingo.")
    for i in range(1,8): 
        ml_lluvia_diario = int(input("Ingrese cantidad de mililitros de lluvia del día"))
        total += ml_lluvia_diario
        
        if i == 1:
            ml_max = ml_lluvia_diario
            dia_max = "Domingo"
        elif i == 2 and ml_lluvia_diario > ml_max:
            ml_max = ml_lluvia_diario
            dia_max = "Lunes"
        elif i == 3 and ml_lluvia_diario > ml_max:
            ml_max = ml_lluvia_diario
            dia_max = "Martes"
        elif i == 4 and ml_lluvia_diario > ml_max:
            ml_max = ml_lluvia_diario
            dia_max = "Miercoles"
        elif i == 5 and ml_lluvia_diario > ml_max:
            ml_max = ml_lluvia_diario
            dia_max = "Jueves"
        elif i == 6 and ml_lluvia_diario > ml_max:
            ml_max = ml_lluvia_diario
            dia_max = "Viernes"
        elif i == 7 and ml_lluvia_diario > ml_max:
            ml_max = ml_lluvia_diario
            dia_max = "Sabado"
    
    print("El promedio de precipitaciones fue de", total/7, "mls. diarios.")
    print("El día de más precipitaciones fue el", dia_max)

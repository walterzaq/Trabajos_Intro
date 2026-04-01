from os import system

def datos_personales():
    dato_ing = ""
    nombre = "Sin nombre ingresado"
    apellido = "Sin apellido indicado"
    correo = "Sin correo indicado"
    while dato_ing != "5":
        dato_ing = input("""**********MI PROGRAMA**********
                1. Mostrar datos actuales.
                2. Actualizar nombre. 
                3. Actualizar apellido.
                4. Actualizar correo. 
                5. Salir
             
                Seleccione una opción [1-5]:""")
        
        if dato_ing == "1" or dato_ing == "2" or dato_ing == "3" or dato_ing == "4":
            
            if dato_ing == "1":
                system("cls")
                print(nombre)
                print("")
                print(apellido)
                print("")
                print(correo)
                print("")
            
            elif dato_ing == "2":
                system("cls")
                nombre = input("Ingrese nombre nuevo: ")
                system("cls")
            
            elif dato_ing == "3":
                system("cls")
                apellido = input("Ingrese apellido nuevo: ")
                system("cls")
            
            elif dato_ing == "4":
                system("cls")
                correo = input("Ingrese correo nuevo: ")
                system("cls")
        else:
            system("cls")
            print("Dato inválido! Intente nuevamente")
            
    system("cls")
    print("HASTA LA PROXIMAAAA")
    

def comparacion_prom():
    total1 = 0
    total2 = 0
    may_com = 0
    print("Bienvenido al Software comparador de promedios! A continuacion, le pediremos que ingrese en forma sucesiva las notas de los estudiantes de ambas comisiones para comparar los promedios")
    for i in range(1,3):
        incrementador = 0
        dato_ing = 0
        print("Ingrese en forma sucesiva las notas de la comision", i)
        
        while dato_ing != -1:
            dato_ing = int(input("Ingrese nota (*-1* Para terminar de cargar notas de esta comision):"))
            
            if i == 1:
                if dato_ing != -1:
                    if dato_ing > 0 and dato_ing < 11:
                        total1 += dato_ing
                        incrementador+=1
                    else:
                        print("El valor  ingresado esta fuera del rango permitido. Intente nuevamente.")
                    
            else:
                if dato_ing != -1:
                    if dato_ing > 0 and dato_ing < 11:
                        total2 += dato_ing
                        incrementador+=1
                    else:
                        print("El valor  ingresado esta fuera del rango permitido. Intente nuevamente.")
        
        if i == 1:
            prom1 = total1//incrementador
            may_com = i
        else:
            prom2 = total2//incrementador
            if prom2 > prom1:
                may_com = i
    
    print("El promedio de la comision 1 es", prom1)
    print("")
    print("El promedio de la comision 2 es", prom2)
    print("")
    print("La comision con el promedio mas alto es la", may_com)
  
def Super_juego_TV():
    opcion = "0"
    while opcion != "2":
        opcion = input("""*****SUPER JUEGO TV
                       1. Comenzar ronda de 10 nombres.
                       2. Salir.
                       Ingrese una opcion: """)
        
        if opcion == "1":
            for i in range(10):
                letras = len(input("Ingrese el nombre: "))
                print("El nombre ingresado tiene", letras, "letras.")
        elif opcion != "2":
            print("Opcion inválida. Vuelva a intentarlo.")

def piedra_papel_tijera():
    while True:
        for i in range(1,3):
            print("Jugador N°", i, end=". ")
            print("¿Qué vas a elegir?")
            respuesta = input("""                                1. Piedra.
                                2. Papel.
                                3. Tijera.
                                Respuesta: """)
            system("cls")
            if i == 1:
                respuesta1 = respuesta
            else:
                respuesta2 = respuesta
        
        if respuesta1 == respuesta2:
            print("Empate!!")
        elif respuesta1 == "1" and respuesta2 == "2":
            print("Gana Jugador 2!")
        elif respuesta1 == "1" and respuesta2 == "3":
            print("Gana Jugador 1!")
        elif respuesta1 == "2" and respuesta2 == "1":
            print("Gana Jugador 1!")
        elif respuesta1 == "2" and respuesta2 == "3":
            print("Gana Jugador 2!")
        elif respuesta1 == "3" and respuesta2 == "1":
            print("Gana Jugador 2!")
        elif respuesta1 == "3" and respuesta2 == "2":
            print("Gana Jugador 1!")

from os import system

def grados_celsius():
    temp_ingresada = "-20"
    while int(temp_ingresada) < -18 or int(temp_ingresada) > 50 or temp_ingresada.isdigit() == False:
        temp_ingresada = input("Ingrese temperatura en grados celsius, solo con valores numericos y en un rango de entre -18 y 50:")
        if temp_ingresada.isdigit() == False:
            print("El dato ingresado no es numerico. Por favor, intentelo nuevamente")
            temp_ingresada = -20
        elif int(temp_ingresada) < -18 or int(temp_ingresada) > 50:
            print("El dato ingresado esta fuera del rango permitido. Por favor, intentelo nuevamente")
        else:
            print(temp_ingresada, "es valido. Gracias!!")

def edad():
    edad_ingresada = "-20"
    while int(edad_ingresada) < 18 or int(edad_ingresada) > 60 or edad_ingresada.isdigit() == False:
        edad_ingresada = input("Ingrese su edad, solo con valores numericos enteros y en un rango de entre 18 y 60:")
        if edad_ingresada.isdigit() == False:
            print("El dato ingresado no es numerico o no se trata de un número entero. Por favor, intentelo nuevamente")
            edad_ingresada = -20
        elif int(edad_ingresada) < -18 or int(edad_ingresada) > 50:
            print("El dato ingresado esta fuera del rango permitido. Por favor, intentelo nuevamente")
        else:
            print(edad_ingresada, "es valido. Gracias!!")

def grados_celsius_con_limite():
    temp_ingresada = "-20"
    i = 1
    while (int(temp_ingresada) < -18 or int(temp_ingresada) > 50 or temp_ingresada.isdigit() == False) and i < 11:
        temp_ingresada = input("Ingrese temperatura en grados celsius, solo con valores numericos y en un rango de entre -18 y 50:")
        if temp_ingresada.isdigit() == False:
            print("El dato ingresado no es numerico. Por favor, intentelo nuevamente")
            temp_ingresada = -20
        elif int(temp_ingresada) < -18 or int(temp_ingresada) > 50:
            print("El dato ingresado esta fuera del rango permitido. Por favor, intentelo nuevamente")
        else:
            print(temp_ingresada, "es valido. Gracias!!")
            
        i+=1
    
    print("Usted esta jugando con mi paciencia pelotudo, yo me retiro.")
        
        
def menu():
    opcion = 3
    while opcion != 4:
        
        opcion = input("""**********MI PROGRAMA**********
                1. Saludar.
                2. Informar temperatura. 
                3. Mostrar nombre de materia.
                4. Salir. 
             
                Seleccione una opción [1-4]:""")
        
        if opcion.isdigit() == False:
            system("cls")
            print("Opción inválida")
            
        else:
            opcion = int(opcion)    
            
            if opcion == 1:
                system("cls")
                print("Hola, bienvenido a mi programa interactivo!")
            elif opcion == 2:
                system("cls")
                print("Hay una sensación térmica de 10 grados Celsius")
            elif opcion == 3:
                system("cls")
                print("Estas en la materia Introduccion a la programacion!")
            elif opcion != 1 and opcion != 2 and opcion != 3 and opcion != 4:
                system("cls")
                print("Opcion inválida")
    
    system("cls")
    print("HASTA LA PROXIMAAAAA")
    
    #Recorda de vez en cuando quitar las terminales que se acumulan y quedarte con la primera. Si estas usando otra, te puede cagar con algun error de sintaxis o logico.    

def color_favorito():
    color_ingr = ""
    while color_ingr != "ROJO" and color_ingr != "VERDE" and color_ingr != "AZUL":
        color_ingr = (input("Ingese su color favorito (Solo puede elegir entre los colores rojo, verde o azul):")).upper()
        
        if color_ingr != "ROJO" and color_ingr != "VERDE" and color_ingr != "AZUL":
            respuesta = input("""**DATO INVÁLIDO**
                                 1.Reintentar.
                                 2.Salir.""")
            if respuesta == "2":
                color_ingr = "ROJO"
    
    if respuesta != "2":
        print(color_ingr, "es válido! Gracias.")
    else:
        print("Hasta luego!!")
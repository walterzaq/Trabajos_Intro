
"""
¿Cuáles son las dos formas de escribir strings en Python? Investigue cuál es la diferencia entre ambas.

"""

print(type(4))
print('"Juan"')

"""
String 
multilinea
"""

numero = 5
cadena = str(numero)
print(cadena)

"""
Las operaciones aritméticas tradicionales tienen un comportamiento especial cuando las aplicamos a strings. Utiliza un script de Python para responder:
"""

suma_cadena = "Ho" + "la"
multi_cadena = "P" * 3

"""
len(string)
string.capitalize()
string.isnumeric()
string.lower()
string.replace(s1,s2)
string.ispace()
string.upper()
string.count(s1)
string.endswith(s1)
"""


"""
Como su nombre lo indica, los strings son cadenas de caracteres, es decir, una sucesión de símbolos. Si lo entendemos de esta manera, podemos utilizar una estructura iterativa, por ejemplo el for, para recorrer uno a 
uno los caracteres de un string, de la siguiente manera:
"""

un_string = "cadena"

for letra in un_string:
	print(letra, end=" ")









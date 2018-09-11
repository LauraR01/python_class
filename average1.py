edad = 1
sumaedad = 0
while edad <= 10:
	persona = int(input("ingrese la edad: "))
	sumaedad = sumaedad + persona
	edad = edad + 1

promedio = sumaedad / 10
print ("el promedio de edades es: ", promedio)
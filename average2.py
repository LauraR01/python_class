r = 1
sumaedades = 0
sumaedadesMuj = 0
sumaedadesHom = 0
sumaf = 0
sumam = 0
cantidad = int(input("ingrese la  cantidad de personas: "))
while r <= cantidad:
	persona = int(input("ingrese la edad: "))
	genero = input("su genero es F o M: ")
	sumaedades = sumaedades + persona
	if genero == "F":
		sumaf = sumaf + 1
		sumaedadesMuj = sumaedadesMuj + persona
	elif genero == "M":
		sumam = sumam + 1
		sumaedadesHom = sumaedadesHom + persona
	r = r + 1
promedio_e = sumaedades / cantidad
promedioMuj = sumaedadesMuj / sumaf
promedioHom = sumaedadesHom / sumam

print("el promedio de todas las edades es: ",promedio_e)
print("el numero de mujeres es: ",sumaf)
print("el promedio de l a edad de las mujeres es: ",promedioMuj)
print("el numero de hombres es: ",sumam)
print("el promedio de l a edad de lo hombres es: ",promedioHom)

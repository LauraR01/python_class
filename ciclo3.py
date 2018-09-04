
rango = 1
num = 1

tabla=int(input("ingrese la tabla de multiplicar: "))
rango=int(input("ingrese el rango de la tabla: "))

while tabla <= rango :
	mult = 1
	while mult <= 10 :
		print(tabla, "*", mult, "=", tabla * mult)
		mult = mult + 1
	tabla = tabla + 1
def funcion1():
	print(".::MENU::.")
	print("1. suma")
	print("2. resta")
	print("3. multiplicacion")
	print("4. division")
	print("5. raiz cuadrada")

def datos():
	global a,b
	a = int(input("digite n1: "))
	b = int(input("digite n2: "))


def funcion2():
	if opc == 1:
		print("la suma es: ",a + b)
	elif opc == 2:
		print("la resta es: ",a - b)
	elif opc == 3:
		print("la multiplicacion es: ",a * b)
	elif opc == 4:
		print("la division es: ",a / b)

datos()
funcion1()
opc = int(input("elija su opcion: "))
funcion2()
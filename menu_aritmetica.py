#ejercicio menu calculadora
import os #importar librerias del sistema

os.system("cls")
print ("menu principal")
print ("1. sumar numeros")
print ("2. restar numeros")
print ("3. multiplicar numeros")
print ("4. dividir numeros")
print (".:::digite su opcion: ")

num1=int(input("ingrese el primer numero: "))
num2=int(input("ingrese el segundo numero: "))
opc=int(input("digite la opcion a realizar: "))

if opc == 1 :
	suma = num1 + num2
	print("la suma es: ",suma)

elif opc == 2 :
	resta = num1 - num2
	print("la resta es: ",resta)

elif opc == 3 :
	mult = num1 * num2
	print("la multiplicacion es: ",mult)

elif opc == 4 :
	div = num1 / num2
	print("la division es: ",div)

else :
	print("ingrese una opcion valida")


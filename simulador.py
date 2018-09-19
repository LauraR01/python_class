#SIMULADOR DE CREDITO
import os
os.system("cls")
opc = 0
i = 1
total_credito = 0
porc_interes = 0
valor = 0
age = 0
cuota_sin_int = cuotas
print("**********************************************")
print(".:: SELECCIONA EL PRODUCTO DE TU INTERES ::.")
print("**********************************************")
print("1. Credito de libranza")
print("2. Credito de vivienda preaprobado")
print("3. Credito de compra de cartera")
print("4. Credito compra de cartera de libranza")
print("5. Credito de libre inversion")
opc = int(input(".:: Seleccione su opcion: "))
while opc <= 1 or opc >= 5 :
	if opc == 1 :
		porc_interes = 1.2
		print(" .::INGRESO DE DATOS GENERALES::. ")
		valor = int(input("Monto del prestamo a solicitar ($): "))
		cuotas = int(input("Ingrese plazo en meses de las cuotas (1-60): "))
		year = int(input("Ano de nacimiento (1918-2000): "))
		age = 2018 - year
		if age >= 18 and age <=24 :
			probabilidad = "Alta"
		elif age >= 25 and age <=55 :
			probabilidad = "Media"
		else :
			probabilidad = "Baja"

		while year <1918 or year >2000:
			year = int(input(".::Error: Opcion incorrecta. el ano de nacimiento: "))
		while cuotas < 1 or cuotas >60:
			cuotas = int(input(".::Error: Opcion incorrecta. Seleccione numero de cuotas: "))

		print("______________________________________________________________________")
		print("| TABLA DE AMORTIZACION")
		print("______________________________________________________________________")
		print("|Nro. cuota | Vr.cuota sin interes | interes | cuotas a pagar |")
		print("______________________________________________________________________")
		while i <= cuotas :
			print ("|",i," ",cuota_sin_int," ",interes," ",cuota_a_pagar)
			total_credito = round(total_credito + cuota_a_pagar)
			i = i + 1
		print("| Edad: ", age)
		print ("| Tasa de interes: ", porc_interes)
		print ("| Total credito ($): ", total_credito)
		print ("| Probabilidad de prestamo: ", probabilidad)
		print ("| Monto solicitado ($): ", valor)
		print ("| Total intereses ($): ", interes * cuotas)
		print ("______________________________________________________________________")
		break
	elif opc == 2 :
		porc_interes = 1.3
		print (" .::INGRESO DE DATOS GENERALES::. ")
		valor = int(input("Monto del prestamo a solicitar ($): "))
		cuotas = int(input("Ingrese plazo en meses de las cuotas (1-60): "))
		year = int(input("Ano de nacimiento (1918-2000): "))
		age = 2018 - year
		if age >= 18 and age <=24 :
			probabilidad = Alta
		elif age >= 25 and age <=55 :
			probabilidad = Media
		else :
			probabilidad = Baja
		while year <1918 or year >2000:
			year = int(input(".::Error: Opcion incorrecta. el ano de nacimiento: "))
		while cuotas < 1 or cuotas >60:
			cuotas = int(input(".::Error: Opcion incorrecta. Seleccione numero de cuotas: "))
		print ("______________________________________________________________________")
		print ("| TABLA DE AMORTIZACION")
		print ("______________________________________________________________________")
		print("|Nro. cuota | Vr.cuota sin interes | interes | cuotas a pagar |")
		print("______________________________________________________________________")
		while i <= cuotas :
			print ("|",i," ",cuota_sin_int," ",interes," ",cuota_a_pagar)
			total_credito = round(total_credito + cuota_a_pagar)
			i = i + 1
		print ("| Edad: ", age)
		print ("| Tasa de interes: ", porc_interes)
		print ("| Total credito ($): ", total_credito)
		print ("| Probabilidad de prestamo: ", probabilidad)
		print ("| Monto solicitado ($): ", valor)
		print ("| Total intereses ($): ", interes * cuotas)
		print ("______________________________________________________________________")
		break
	elif opc == 3 :
		porc_interes = 1.4
		print(" .::INGRESO DE DATOS GENERALES::. ")
		valor = int(input("Monto del prestamo a solicitar ($): "))
		cuotas = int(input("Ingrese plazo en meses de las cuotas (1-60): "))
		year = int(input("Ano de nacimiento (1918-2000): "))
		age = 2018 - year
		if age >= 18 and age <=24 :
			probabilidad = Alta
		elif age >= 25 and age <=55 :
			probabilidad = Media
		else :
			probabilidad = Baja
		while year <1918 or year >2000:
			year = int(input(".::Error: Opcion incorrecta. el ano de nacimiento: "))
		while cuotas < 1 or cuotas >60:
			cuotas = int(input(".::Error: Opcion incorrecta. Seleccione numero de cuotas: "))
		print ("______________________________________________________________________")
		print ("| TABLA DE AMORTIZACION")
		print ("______________________________________________________________________")
		print("|Nro. cuota | Vr.cuota sin interes | interes | cuotas a pagar |")
		print("______________________________________________________________________")
		while i <= cuotas :
			print ("|",i," ",cuota_sin_int," ",interes," ",cuota_a_pagar)
			total_credito = round(total_credito + cuota_a_pagar)
			i = i + 1
		print ("| Edad: ", age)
		print ("| Tasa de interes: ", porc_interes)
		print ("| Total credito ($): ", total_credito)
		print ("| Probabilidad de prestamo: ", probabilidad)
		print ("| Monto solicitado ($): ", valor)
		print ("| Total intereses ($): ", interes * cuotas)
		print ("______________________________________________________________________")
		break
	elif opc == 4 :
		porc_interes = 1.7
		print(" .::INGRESO DE DATOS GENERALES::. ")
		valor = int(input("Monto del prestamo a solicitar ($): "))
		cuotas = int(input("Ingrese plazo en meses de las cuotas (1-60): "))
		year = int(input("Ano de nacimiento (1918-2000): "))
		age = 2018 - year
		if age >= 18 and age <=24 :
			probabilidad = Alta
		elif age >= 25 and age <=55 :
			probabilidad = Media
		else :
			probabilidad = Baja
		while year <1918 or year >2000:
			year = int(input(".::Error: Opcion incorrecta. el ano de nacimiento: "))
		while cuotas < 1 or cuotas >60:
			cuotas = int(input(".::Error: Opcion incorrecta. Seleccione numero de cuotas: "))
		print ("______________________________________________________________________")
		print ("| TABLA DE AMORTIZACION")
		print ("______________________________________________________________________")
		print("|Nro. cuota | Vr.cuota sin interes | interes | cuotas a pagar |")
		print("______________________________________________________________________")
		while i <= cuotas :
			print ("|",i," ",cuota_sin_int," ",interes," ",cuota_a_pagar)
			total_credito = round(total_credito + cuota_a_pagar)
			i = i + 1
		print ("| Edad: ", age)
		print ("| Tasa de interes: ", porc_interes)
		print ("| Total credito ($): ", total_credito)
		print ("| Probabilidad de prestamo: ", probabilidad)
		print ("| Monto solicitado ($): ", valor)
		print ("| Total intereses ($): ", interes * cuotas)
		print ("______________________________________________________________________")
		print ("______________________________________________________________________")
		break
	elif opc == 5 :
		porc_interes = 2
		print(" .::INGRESO DE DATOS GENERALES::. ")
		valor = int(input("Monto del prestamo a solicitar ($): "))
		cuotas = int(input("Ingrese plazo en meses de las cuotas (1-60): "))
		year = int(input("Ano de nacimiento (1918-2000): "))
		age = 2018 - year
		if age >= 18 and age <=24 :
			probabilidad = Alta
		elif age >= 25 and age <=55 :
			probabilidad = Media
		else :
			probabilidad = Baja
		while year <1918 or year >2000:
			year = int(input(".::Error: Opcion incorrecta. el ano de nacimiento: "))
		while cuotas < 1 or cuotas >60:
			cuotas = int(input(".::Error: Opcion incorrecta. Seleccione numero de cuotas: "))
		print ("______________________________________________________________________")
		print ("| TABLA DE AMORTIZACION")
		print ("______________________________________________________________________")
		print("|Nro. cuota | Vr.cuota sin interes | interes | cuotas a pagar |")
		print("______________________________________________________________________")
		while i <= cuotas :
			print ("|",i," ",cuota_sin_int," ",interes," ",cuota_a_pagar)
			total_credito = round(total_credito + cuota_a_pagar)
			i = i + 1
		print ("| Edad: ", age)
		print ("| Tasa de interes: ", porc_interes)
		print ("| Total credito ($): ", total_credito)
		print ("| Probabilidad de prestamo: ", probabilidad)
		print ("| Monto solicitado ($): ", valor)
		print ("| Total intereses ($): ", interes * cuotas)
		print ("______________________________________________________________________")
		break
	else:	
		opc = int(input(" .::Error: Opcion incorrecta. Seleccione su opcion: "))
		
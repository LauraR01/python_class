s = int(5000000)
intM = 3
intR = 1
clave_p = 1234
clave_N = clave_p

clave = int(input("ingrese la clave: "))

while intM > 1 :
	intM = intM - intR
	if clave_p == clave :
		print("menu transaccional")
		print("1: cambiar clave")
		print("2: mostrar saldo")
		print("3: realizar retiro")
		print("4: salir")
		print(".: digite la opcion")
		opc = int(input(": "))

		if opc == 1 :
			clave_N = int(input("ingrese la clave nueva: "))
		elif opc == 2 :
			print("su saldo actual es: ",s)
		elif opc == 3 :
			print("¿cual es el monto a retirar?")
			print("1: $10.000")	
			print("1: $20.000")	
			print("1: $50.000")	
			print("1: $100.000")	
			print("1: $200.000")	
			print("1: $400.000")
			print("1: $600.000")	
			print("1: $1'000.000")

			m_1 = 10000
			m_2 = 20000
			m_3 = 50000
			m_4 = 100000
			m_5 = 200000
			m_6 = 400000
			m_7 = 600000
			m_8 = 1000000
			opc_M =	int(input("ingrese la opcion: "))
			if opc_M == 1 :
			 	if s > m_1 :
			 		print("se ha retirado $10.000")
			 		print("su saldo actual es: ",s - m_1)
			 	else :
			 		print("el saldo es insuficiente para realizar el retiro.")
			 		
			elif opc_M == 2 :
			 	if s > m_2 :
			 		print("se ha retirado $20.000")
			 		print("su saldo actual es: ",s - m_2)
			 	else :
			 		print("el saldo es insuficiente para realizar el retiro.")
			elif opc_M == 3 :
			 	if s > m_3 :
			 		print("se ha retirado $50.000")
			 		print("su saldo actual es: ",s - m_3)
			 	else :
			 		print("el saldo es insuficiente para realizar el retiro.")
			elif opc_M == 4 :
			 	if s > m_4 :
			 		print("se ha retirado $100.000")
			 		print("su saldo actual es: ",s - m_4)
			 	else :
			 		print("el saldo es insuficiente para realizar el retiro.")
			elif opc_M == 5 :
			 	if s > m_5 :
			 		print("se ha retirado $200.000")
			 		print("su saldo actual es: ",s - m_5)
			 	else :
			 		print("el saldo es insuficiente para realizar el retiro.")
			elif opc_M == 6 :
			 	if s > m_6 :
			 		print("se ha retirado $400.000")
			 		print("su saldo actual es: ",s - m_6)
			 	else :
			 		print("el saldo es insuficiente para realizar el retiro.")
			elif opc_M == 7 :
			 	if s > m_7 :
			 		print("se ha retirado $600.000")
			 		print("su saldo actual es: ",s - m_7)
			 	else :
			 		print("el saldo es insuficiente para realizar el retiro.")
			elif opc_M == 8 :
			 	if s > m_8 :
			 		print("se ha retirado $1'000.000")
			 		print("su saldo actual es: ",s - m_8)
			 	else :
			 		print("el saldo es insuficiente para realizar el retiro.")	
			else :
				print("ingrese una opcion valida")
		elif opc == 4:
			print("ha salido de su cuenta")
			break
		else :
			print("ingrese una opcion valida")

	else :
		print ("quedan", intM - intR, "intentos")

		
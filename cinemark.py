import os

def Hoy():
	while True:
		carteleraHoy()
		opcionPeli = input("Elige tu pelicula ")

		if opcionPeli =="1":
			Guason()
		elif opcionPeli =="2":
			UnAmigoAbominable()
		elif opcionPeli =="3":
			Rambo()
		elif opcionPeli =="4":
			InfiernoTormenta()
		elif opcionPeli =="5":
			IT()
		elif opcionPeli =="6":
			break

def Lunes():
	while True:
		carteleraLunes()
		opcionPeli = input("Elige tu pelicula ")
		if opcionPeli =="1":
			proyectogeminis()
		elif opcionPeli =="2":
			dora()
		elif opcionPeli =="3":
			link()
		elif opcionPeli =="4":
			Guason()
		elif opcionPeli =="5":
			IT()
		elif opcionPeli =="6":
			break

def Martes():
	while True:
		carteleraMartes()
		opcionPeli = input("Elige tu pelicula ")
		if opcionPeli =="1":
			proyectogeminis()
		elif opcionPeli =="2":
			Guason()
		elif opcionPeli =="3":
			UnAmigoAbominable()
		elif opcionPeli =="4":
			break

def Miercoles():
	while True:
		carteleraMiercoles()
		opcionPeli = input("Elige tu pelicula ")
		if opcionPeli =="1":
			dora()
		elif opcionPeli =="2":
			IT()
		elif opcionPeli =="3":
			UnAmigoAbominable()
		elif opcionPeli =="4":
			break
	
def Jueves():
	while True:
		carteleraJueves()
		opcionPeli = input("Elige tu pelicula ")
		if opcionPeli =="1":
			proyectogeminis()
		elif opcionPeli =="2":
			link()
		elif opcionPeli =="3":
			UnAmigoAbominable()
		elif opcionPeli == "4":
			Rambo()
		elif opcionPeli =="5":
			break

def Viernes():
	while True:
		carteleraViernes()
		opcionPeli = input("Elige tu pelicula ")
		if opcionPeli =="1":
			Guason()
		elif opcionPeli =="2":
			InfiernoTormenta()
		elif opcionPeli =="3":
			dora()
		elif opcionPeli =="4":
			Rambo()
		elif opcionPeli =="5":
			break

def Sabado():
	while True:
		carteleraSabado()
		opcionPeli = input("Elige tu pelicula ")
		if opcionPeli =="1":
			Guason()
		elif opcionPeli =="2":
			InfiernoTormenta()
		elif opcionPeli =="3":
			dora()
		elif opcionPeli =="4":
			Rambo()
		elif opcionPeli =="5":
			proyectogeminis()
		elif opcionPeli =="6":
			link()
		elif opcionPeli =="7":
			UnAmigoAbominable()
		elif opcionPeli =="8":
			IT()
		elif opcionPeli =="9":
			break	

def carteleraHoy():
	print("BIENVENIDO A CINEMARK")
	print("Cartelera de Cines")
	print("Selecciona una opción")
	print("\t1 - Guason")
	print("\t2 - Un Amigo Abominale")
	print("\t3 - Rambo: Last Blood")
	print("\t4 - Infierno en la Tormenta")
	print("\t5 - IT: Capitulo 2")
	print("\t6 - salir")

def carteleraLunes():
	print("BIENVENIDO A CINEMARK")
	print("Cartelera de Cines")
	print("Selecciona una opción")
	print("\t1 - Proyecto Geminis")
	print("\t2 - Dora y la Ciudad Perdida")
	print("\t3 - SR. LINK")
	print("\t4 - Guason")
	print("\t5 - IT: Capitulo 2")
	print("\t6 - salir")

def carteleraMartes():
	print("BIENVENIDO A CINEMARK")
	print("Cartelera de Cines")
	print("Selecciona una opción")
	print("\t1 - Proyecto Geminis")
	print("\t2 - Guason")
	print("\t3 - Un Amigo Abominable")
	print("\t4 - salir")

def carteleraMiercoles():
	print("BIENVENIDO A CINEMARK")
	print("Cartelera de Cines")
	print("Selecciona una opción")
	print("\t1 - Dora y la Ciudad Perdida")
	print("\t2 - IT: Capitulo 2")
	print("\t3 - Un Amigo Abominable")
	print("\t4 - salir")

def carteleraJueves():
	print("BIENVENIDO A CINEMARK")
	print("Cartelera de Cines")
	print("Selecciona una opción")
	print("\t1 - Proyecto Geminis")
	print("\t2 - SR. LINK")
	print("\t3 - Un Amigo Abominable")
	print("\t4 - Rambo: Last Blood")
	print("\t5 - salir")

def carteleraViernes():
	print("BIENVENIDO A CINEMARK")
	print("Cartelera de Cines")
	print("Selecciona una opción")
	print("\t1 - Guason")
	print("\t2 - Infierno en la Tormenta")
	print("\t3 - Dora y la Ciudad Perdida")
	print("\t4 - Rambo: Last Blood")	
	print("\t5 - salir")

def carteleraSabado():
	print("BIENVENIDO A CINEMARK")
	print("Cartelera de Cines")
	print("Selecciona una opción")
	print("\t1 - Guason")
	print("\t2 - Infierno en la Tormenta")
	print("\t3 - Dora y la Ciudad Perdida")
	print("\t4 - Rambo: Last Blood")
	print("\t5 - Proyecto Geminis")
	print("\t6 - SR. LINK")
	print("\t7 - Un Amigo Abominable")
	print("\t8 - IT: Capitulo 2")
	print("\t9 - salir")

def proyectogeminis():
	while True:
		print("Has elegido: Proyecto Geminis.")
		print("Clasificacion B\nDuracion 1h 57m")
		print("Disponible solo en 2D Doblada")
		print("Horas: 7:40pm")
		print("\t1 - Ver todos los precios")
		print("\t2 - Ver menu de comida")
		print("\t3 - Salir")
		opcion = input("Ingrese una opcion ")
		if opcion =="1":
			print("2D\nRegular $4.75\nNiño $ 3.85\nEstudiantes $ 3.85\nTercera edad $ 3.85\nMatinee (Antes de las 2 p.m.) $3.85")
			print("3D\nRegular $6.75\nNiño $5.75\nDía de descuento $5.40")
		elif opcion == "2":
			while True:
				comida()
				c = input("Seleccione una opcion: ")
				if c == "1":
					combo1()
				elif c == "2":
					combo2()
				elif c == "3":
					combo3()
				elif c == "4":
					combocinecajita()
				elif c == "5":
					combochilidog()
				elif c == "6":
					megacombo()
				elif c == "7":
					megacomborefil()
				elif c == "8":
					combofamiliar()
				elif c == "9":
					sodas()
				elif c == 's':
					break
		elif opcion =="3":
			break

def dora():
	while True:
		print("Has elegido: Dora y la Ciudad Perdida.")
		print("Clasificacion AA\nDuracion 1h 42m")
		print("Disponible solo en 2D Doblada")
		print("Horas: 6:55pm")
		print("\t1 - Ver todos los precios")
		print("\t2 - Ver menu de comida")
		print("\t3 - Salir")
		opcion = input("Ingrese una opcion ")
		if opcion =="1":
			print("2D\nRegular $4.75\nNiño $ 3.85\nEstudiantes $ 3.85\nTercera edad $ 3.85\nMatinee (Antes de las 2 p.m.) $3.85")
			print("3D\nRegular $6.75\nNiño $5.75\nDía de descuento $5.40")
		elif opcion == "2":
			while True:
				comida()
				c = input("Seleccione una opcion: ")
				if c == "1":
					combo1()
				elif c == "2":
					combo2()
				elif c == "3":
					combo3()
				elif c == "4":
					combocinecajita()
				elif c == "5":
					combochilidog()
				elif c == "6":
					megacombo()
				elif c == "7":
					megacomborefil()
				elif c == "8":
					combofamiliar()
				elif c == "9":
					sodas()
				elif c == 's':
					break
		elif opcion =="3":
			break

def link():
	while True:
		print("Has elegido: SR. LINK.")
		print("Clasificacion A\nDuracion 1h 34m")
		print("Disponible solo en 2D Doblada")
		print("Horas: 11:55am 2:15pm")
		print("\t1 - Ver todos los precios")
		print("\t2 - Ver menu de comida")
		print("\t3 - Salir")
		opcion = input("Ingrese una opcion ")
		if opcion =="1":
			print("2D\nRegular $4.75\nNiño $ 3.85\nEstudiantes $ 3.85\nTercera edad $ 3.85\nMatinee (Antes de las 2 p.m.) $3.85")
			print("3D\nRegular $6.75\nNiño $5.75\nDía de descuento $5.40")
		elif opcion == "2":
			while True:
				comida()
				c = input("Seleccione una opcion: ")
				if c == "1":
					combo1()
				elif c == "2":
					combo2()
				elif c == "3":
					combo3()
				elif c == "4":
					combocinecajita()
				elif c == "5":
					combochilidog()
				elif c == "6":
					megacombo()
				elif c == "7":
					megacomborefil()
				elif c == "8":
					combofamiliar()
				elif c == "9":
					sodas()
				elif c == 's':
					break
		elif opcion =="3":
			break

def Guason():
	print("Has elegido: Guason.")
	print("Clasificacion D\nDuracion: 2h 2m")
	while True:		
		print("\t1 - 2D Doblada")
		print("\t2 - 2D Subtitulada")
		print("\t3 - Ver todos los precios")
		print("\t4 - Ver menu de comida")
		print("\t5 - Salir")
		opcion = input("Ingrese una opcion ")
		if opcion =="1":
			print("2D Doblada")
			print("Horas: 4:40pm 5:20pm 6:20pm 6:45pm 7:30pm 8:10pm 9:10pm")
		elif opcion =="2":
			print("2D Subtitulada")
			print("Horas: 5:50pm 8:40pm 9:30pm")
		elif opcion =="3":
			print("2D\nRegular $4.75\nNiño $ 3.85\nEstudiantes $ 3.85\nTercera edad $ 3.85\nMatinee (Antes de las 2 p.m.) $3.85")
			print("3D\nRegular $6.75\nNiño $5.75\nDía de descuento $5.40")
		elif opcion == "4":
			while True:
				comida()
				c = input("Seleccione una opcion: ")
				if c == "1":
					combo1()
				elif c == "2":
					combo2()
				elif c == "3":
					combo3()
				elif c == "4":
					combocinecajita()
				elif c == "5":
					combochilidog()
				elif c == "6":
					megacombo()
				elif c == "7":
					megacomborefil()
				elif c == "8":
					combofamiliar()
				elif c == "9":
					sodas()
				elif c == 's':
					break
		elif opcion =="5":
			break

def UnAmigoAbominable():
	while True:
		print("Has elegido: Un Amigo Abominable.")
		print("Clasificacion A\nDuracion: 1h 37m")
		print("Disponible solo en 2D Doblada")
		print("Horas: 4:35pm 6:55pm")
		print("\t1 - Ver todos los precios")
		print("\t2 - Ver menu de comida")
		print("\t3 - Salir")
		opcion = input("Ingrese una opcion ")
		if opcion =="1":
			print("2D\nRegular $4.75\nNiño $ 3.85\nEstudiantes $ 3.85\nTercera edad $ 3.85\nMatinee (Antes de las 2 p.m.) $3.85")
			print("3D\nRegular $6.75\nNiño $5.75\nDía de descuento $5.40")
		elif opcion == "2":
			while True:
				comida()
				c = input("Seleccione una opcion: ")
				if c == "1":
					combo1()
				elif c == "2":
					combo2()
				elif c == "3":
					combo3()
				elif c == "4":
					combocinecajita()
				elif c == "5":
					combochilidog()
				elif c == "6":
					megacombo()
				elif c == "7":
					megacomborefil()
				elif c == "8":
					combofamiliar()
				elif c == "9":
					sodas()
				elif c == 's':
					break
		elif opcion =="3":
			break

def Rambo():
	while True:
		print("Has elegido: Rambo: Last Blood.")
		print("Clasificacion D\nDuracion: 1h 41m")
		print("Disponible solo en 2D Doblada")
		print("Horas: 9:15pm")
		print("\t1 - Ver todos los precios")
		print("\t2 - Ver menu de comida")
		print("\t3 - Salir")
		opcion = input("Ingrese una opcion ")
		if opcion =="1":
			print("2D\nRegular $4.75\nNiño $ 3.85\nEstudiantes $ 3.85\nTercera edad $ 3.85\nMatinee (Antes de las 2 p.m.) $3.85")
			print("3D\nRegular $6.75\nNiño $5.75\nDía de descuento $5.40")
		elif opcion == "2":
			while True:
				comida()
				c = input("Seleccione una opcion: ")
				if c == "1":
					combo1()
				elif c == "2":
					combo2()
				elif c == "3":
					combo3()
				elif c == "4":
					combocinecajita()
				elif c == "5":
					combochilidog()
				elif c == "6":
					megacombo()
				elif c == "7":
					megacomborefil()
				elif c == "8":
					combofamiliar()
				elif c == "9":
					sodas()
				elif c == 's':
					break
		elif opcion =="3":
			break

def InfiernoTormenta():
	while True:
		print("Has elegido: Infierno en la Tormenta.")
		print("Clasificacion C\nDuracion: 1h 27m")
		print("Disponible solo en 2D Doblada")
		print("Horas: 6:35pm 8:50pm")
		print("\t1 - Ver todos los precios")
		print("\t2 - Ver menu de comida")
		print("\t3 - Salir")
		opcion = input("Ingrese una opcion ")
		if opcion =="1":
			print("2D\nRegular $4.75\nNiño $ 3.85\nEstudiantes $ 3.85\nTercera edad $ 3.85\nMatinee (Antes de las 2 p.m.) $3.85")
			print("3D\nRegular $6.75\nNiño $5.75\nDía de descuento $5.40")
		elif opcion == "2":
			while True:
				comida()
				c = input("Seleccione una opcion: ")
				if c == "1":
					combo1()
				elif c == "2":
					combo2()
				elif c == "3":
					combo3()
				elif c == "4":
					combocinecajita()
				elif c == "5":
					combochilidog()
				elif c == "6":
					megacombo()
				elif c == "7":
					megacomborefil()
				elif c == "8":
					combofamiliar()
				elif c == "9":
					sodas()
				elif c == 's':
					break
		elif opcion =="3":
			break

def IT():
	while True:
		print("Has elegido: IT: Capitulo 2.")
		print("Clasificacion C\nDuracion: 2h 49m")
		print("Disponible solo en 2D Doblada")
		print("Horas: 5:00pm 8:35pm")
		print("\t1 - Ver todos los precios")
		print("\t2 - Ver menu de comida")
		print("\t3 - Salir")
		opcion = input("Ingrese una opcion ")
		if opcion =="1":
			print("2D\nRegular $4.75\nNiño $ 3.85\nEstudiantes $ 3.85\nTercera edad $ 3.85\nMatinee (Antes de las 2 p.m.) $3.85")
			print("3D\nRegular $6.75\nNiño $5.75\nDía de descuento $5.40")
		elif opcion == "2":
			while True:
				comida()
				c = input("Seleccione una opcion: ")
				if c == "1":
					combo1()
				elif c == "2":
					combo2()
				elif c == "3":
					combo3()
				elif c == "4":
					combocinecajita()
				elif c == "5":
					combochilidog()
				elif c == "6":
					megacombo()
				elif c == "7":
					megacomborefil()
				elif c == "8":
					combofamiliar()
				elif c == "9":
					sodas()
				elif c == 's':
					break
		elif opcion =="3":
			break

def comida():
	print("Menu de comida y combos Cinemark:")
	print("\t1 - Combo 1\n\t2 - Combo 2\n\t3 - Combo 3\n\t4 - Combo Cinecajita\n\t5 - Combo Chili Dog\n\t6 - MEGACOMBO\n\t7 - MEGACOMBO CON REFIL\n"
		"\t8 - COMBO FAMILIAR\n\t9 - TROPICAL SODAS\n\ts - Salir")
def combo1():
	print("COMBO 1:")
	print("Pop Corn salado\n1 bebida mediana\n1 nacho sencillo\nPrecio: $5.50")

def combo2():
	print("COMBO 2:")
	print("Pop Corn salado grande\n2 bebidas medianas\nPrecio: $6.00")

def combo3():
	print("COMBO 3:")
	print("Pop Corn salado mediano\n1 bebida mediana\nHot Dog Cinemark\nPrecio: $6.99")

def combocinecajita():
	print("COMBO CINECAJITA:")
	print("Pop Corn infantil\n1 bebida de 12oz\nGolosina\nPrecio: $4.00")

def combochilidog():
	print("COMBO CHILI DOG:")
	print("Chili + Hot Dog\nPop Corn salado mediano\n1 bebida mediana\nPrecio: $6.50")

def megacombo():
	print("MEGACOMBO:")
	print("Pop Corn salado grande\n2 bebidas grandes\nPrecio: $7.00")

def megacomborefil():
	print("MEGACOMBO CON REFIL:")
	print("Megacombo \nRefil de palomitas\nPrecio: $8.50")

def combofamiliar():
	print("COMBO FAMILIAR:")
	print("Pop Corn grande + 4 bebidas + 2 nachos + 4 hot dog\nPrecio: $20.00 (precio depende de la familia)")

def sodas():
	print("SODAS TROPICALES:")
	print("Sodas italianas saborizadas. Precio: $1.00")

while True:
	print("Cinemark")
	print("\t1 - Hoy\n \t2 - Lunes\n \t3 - Martes\n \t4 - Miercoles\n \t5 - Jueves\n \t6 - Viernes\n \t7 - Sabado\n \t8 - Salir de Cinemark")
	op = input("QUE CARTELERA DESEA VER? ")
	if op =="1":
		Hoy()
	elif op =="2":
		Lunes()
	elif op =="3":
		Martes()
	elif op =="4":
		Miercoles()
	elif op =="5":
		Jueves()
	elif op =="6":
		Viernes()
	elif op =="7":
		Sabado()
	elif op =="8":
		print("Gracias por su visita. Le esperamos pronto")
		break	
Algoritmo Login_Bucle
	
	Definir usuario Como Caracter
	
	Definir password Como Entero
	
	Definir a Como Logico
	a <- Falso
	
	Mientras  a == Falso Hacer
		Escribir "Ingresa tu usuario: "
		Leer usuario
		Escribir "Ingresa tu password: "
		Leer password
		Si (usuario == "byron") y (password == 12345) Entonces
			a = Verdadero
		SiNo
			Escribir "Datos Erroneos, vuelve a ingresar"
			a = Falso
		FinSi
	Fin Mientras
	Escribir "Bienvenido a nuestro Sistema "
	
	Escribir "Selecciona tu nickname: "
	Escribir "1.- Iron Man"
	Escribir "2.- Thor"
	Escribir "3.- Hulk"
	Leer nickname
	Segun nickname  Hacer
		1:
			Escribir  "Bienvenido Iron Man"
		2:
			Escribir 'Bienvenido Thor'
		3:
			Escribir 'Bienvenido Hulk'
		De Otro Modo:
			Escribir 'Nickname incorrecto'
	FinSegun
	

FinAlgoritmo

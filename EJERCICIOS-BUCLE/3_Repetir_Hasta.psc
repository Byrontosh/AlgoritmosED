Algoritmo Repetir_Mientras
	
	i <- 0
	s <- 0
	
	Repetir
		
		Escribir  "Ingresar un número: "
		Leer i
		
		Si i  <> 10 Entonces
			s = s+i
		FinSi
		
	Hasta Que i == 10
	
	Escribir "Sali del bucle, y la suma es: ",s
	
FinAlgoritmo

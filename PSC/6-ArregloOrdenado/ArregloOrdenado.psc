Algoritmo ArregloOrdenado
	// Este algoritmo permite crear un arreglo de dimension 10, llenar
	// dicho arreglo de forma manual o de forma pseudo aleatoria
	// seguido de su impresion, una vez impreso se debera de ordenar de 
	// forma ascendente e imprimir nuevamente el arreglo ya ordenado
	Dimension numero[10]
	Definir respuesta Como Caracter
	Definir conta,memo,x Como Entero
	Escribir 'Este algoritmo permite crear un arreglo de dimension 10'
	Escribir '¿De que forma quieres llenar los 10 espacios?'
	Escribir 'M(manual) ó  P(Pseudo aleatorio)'
	Leer respuesta
	Si (respuesta=='M') Entonces
		conta <- 1
		Mientras (conta<11) Hacer
			Escribir 'Ingresa el valor de la posicion ',conta
			Leer numero[conta]
			conta <- conta+1
		FinMientras
		conta <- 1
		Escribir 'Los numeros son:'
		conta <- 1
		Mientras (conta<11) Hacer
			Escribir 'Posicion ',conta,': ',numero[conta]
			conta <- conta+1
		FinMientras
		conta <- 1
		Mientras (numero[conta]<numero[conta+1]) Hacer
			memo <- numero[conta+1]
			numero[conta+1]<-numero[conta]
			numero[conta] <- memo
			conta <- conta+1
		FinMientras
		conta <- 1
		Repetir
			Repetir
				Si (numero[conta]>numero[conta+1]) Entonces
					memo <- numero[conta+1]
					numero[conta+1]<-numero[conta]
					numero[conta] <- memo
				FinSi
				conta <- conta+1
			Hasta Que conta==10
			conta <- 1
			x <- x+1
		Hasta Que x==10
		Escribir 'Los valores ordenados son:'
		Mientras (conta<11) Hacer
			Escribir 'Posicion ',conta,': ',numero[conta]
			conta <- conta+1
		FinMientras
	FinSi
	Si (respuesta=='P') Entonces
		conta <- 1
		Escribir 'Los valores de las posiciones se llenaran de forma pseudoaleatoria'
		Mientras (conta<11) Hacer
			numero[conta] <- azar(100)
			conta <- conta+1
		FinMientras
		Escribir 'Los valores ya estan asignados'
		conta <- 1
		Escribir 'Los valores son'
		Mientras (conta<11) Hacer
			Escribir 'Posicion ',conta,': ',numero[conta]
			conta <- conta+1
		FinMientras
		conta <- 1
		Mientras (numero[conta]<numero[conta+1]) Hacer
			memo <- numero[conta+1]
			numero[conta+1]<-numero[conta]
			numero[conta] <- memo
			conta <- conta+1
		FinMientras
		conta <- 1
		Repetir
			Repetir
				Si (numero[conta]>numero[conta+1]) Entonces
					memo <- numero[conta+1]
					numero[conta+1]<-numero[conta]
					numero[conta] <- memo
				FinSi
				conta <- conta+1
			Hasta Que conta==10
			conta <- 1
			x <- x+1
		Hasta Que x==10
		Escribir 'Los valores ordenados son:'
		Mientras (conta<11) Hacer
			Escribir 'Posicion ',conta,': ',numero[conta]
			conta <- conta+1
		FinMientras
	FinSi
FinAlgoritmo

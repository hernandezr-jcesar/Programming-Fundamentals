Proceso ProductoDelos3Mayores
	// El siguiente algoritmo resivira n numeros enteros solicitando uno a uno al usuario
	// Como resultado debera de imprimir los tres valores mayores asi como el producto de los mismos
	// se requieren 3 valores y que el usuario decida cuando finalizar la asignacion de numeros
	// siempre que sean mayores o iguales a tres numeros
	Definir num1,num2,num3,memo,result,producto Como Entero
	Definir pregunta Como Caracter
	Escribir 'Este es un algoritmo que ordena numeros del mayor al menor'
	Escribir 'Asi como dar el producto de los mismos'
	Escribir 'Solo tomara los 3 numeros mas grandes'
	Escribir 'Ingresa un número'
	Leer num1
	Escribir 'Ingresa otro número'
	Leer num2
	Si (num2>num1) Entonces
		memo <- num2
		num2 <- num1
		num1 <- memo
	FinSi
	Escribir 'Ingresa otro número'
	Leer num3
	Si (num3>num1) Entonces
		memo <- num3
		num3 <- num1
		num1 <- memo
	FinSi
	Si (num3>num2) Entonces
		memo <- num3
		num3 <- num2
		num2 <- memo
	FinSi
	Escribir 'Desea ingresar otro número'
	Escribir '(si)(no)'
	Leer pregunta
	Si (pregunta=='no') Entonces
		Escribir 'los numeros ordenados del mayor al menor de los que ingreso son: ',num1,', ',num2,', ',num3
		producto <- num1*num2*num3
		Escribir 'El producto de los tres numeros mayores es ',producto
	SiNo
		Repetir
			Escribir 'Ingrese otro numero'
			Leer memo
			Si (memo>num1) Entonces
				result <- num1
				num1 <- memo
				memo <- result
			FinSi
			Si (memo>num2) Entonces
				result <- num2
				num2 <- memo
				memo <- result
			FinSi
			Si (memo>num3) Entonces
				result <- num3
				num3 <- memo
				memo <- result
			FinSi
			Escribir 'Desea ingresar otro número'
			Escribir '(si)(no)'
			Leer pregunta
		Hasta Que pregunta='no'
		Escribir 'los numeros ordenados del mayor al menor de los que ingreso son: ',num1,', ',num2,', ',num3
		producto <- num1*num2*num3
		Escribir 'El producto de los tres numeros mayores es ',producto
	FinSi
FinProceso


Algoritmo AlgoritmoDeDivision
	Definir a, b, q, r Como Entero
	Escribir "Queremos determinar el cociente q"
	Escribir "y el resto r cuando el entero a"
	Escribir  "se divide entre el entero positivo b."
	Escribir "a= "
	Leer a
	Escribir "b="
	Leer b
	si (a==0)Entonces
		Escribir "En este caso , a=0, por lo que q=0 y r=0."
	SiNo
		r:= abs(a)
		q:= 0
		Mientras (r>=b)
			r:= r-b
			q:= q+1
		FinMientras
		si (a>0) Entonces
			Escribir "Cuando dividimos ",a," entre ",b,"."
			Escribir "el cociente q=",q," y"
			Escribir "el resto r=",r,"."
		SiNo
			si (r=0) Entonces
				Escribir "Cuando dividimos ",a," entre ",b,"."
				Escribir "el cociente q=",-q," y"
				Escribir "el resto r=0"
			SiNo
				Escribir "Cuando dividimos ",a," entre ",b,"."
				Escribir "el cociente q=",(-q-1)," y"
				Escribir "el resto r=",(b-r),"."
			FinSi
		FinSi
	FinSi
FinAlgoritmo

Proceso SimulandoUnSemaforo
	//El siguiente algoritmo simulara el funcionamiento de un semaforo solicitando al usuario alguno de los tres colores validos del semaforo, 
	//como salida se espera la interpretacion de cada color y en caso de que sea un color no valido debera de enviar un mensaje de color no valido
	DEFINIR Color COMO CARACTER
	Escribir "Escribe el color que estes viendo en el semaforo,(Verde, Rojo, Amarillo).";
	Leer Color;
	Si Color=="Verde" Entonces
		Escribir "El color del semaforo es verde por lo que deberas avanzar.";
	Sino
		Si Color=="Rojo"  Entonces
			Escribir "El color del semaforo es Rojo Por lo que deberas esperar para avanzar hasta que el color sea verde.";
		Sino
			Si Color=="Amarillo" Entonces
				Escribir "El color del semaforo es amarillo por lo que todavia no puedes avanzar, espera que el color sea verde para avanzar.";
			Sino 
				Escribir "El color ingresado no esta en las opciones de un semaforo favor de ingresar un color valido:Verde, Rojo o Amarillo.";
			FinSi
		FinSi
	FinSi
FinProceso


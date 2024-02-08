Proceso MejoraDelSemaforo
	//retomar el algoritmo del semaforo y hacer 2 mejoras:
	// Añadir mas entradas verdaderas en las opciones de 
	//Preguntar si se repite el algoritmo
	Definir pregunta Como caracter;
	Definir Color Como Caracter;
	pregunta="SI";
	mientras (pregunta=="SI") 
		
		Escribir "Escribe el color que estes viendo en el semaforo,(Verde, Rojo, Amarillo).";
		Leer Color;
		Si (Color=="Verde" o Color=="VERDE" o Color=="verde") Entonces
			Escribir "El color del semaforo es verde.Entonces puedes avanzar.";
		Sino
			Si (Color=="Rojo" o Color=="ROJO" O Color=="rojo") Entonces
				Escribir "El color del semaforo es Rojo.Entonces deberas detenerte";
			Sino
				Si (Color=="Amarillo" o Color=="AMARILLO" o Color=="amarillo") Entonces
					Escribir "El color del semaforo es amarillo.Entonces deveras bajar tu velocidad.";
				Sino 
					Escribir "El color ingresado no esta en las opciones de un semaforo favor de ingresar un color valido:Verde, Rojo o Amarillo.";
				FinSi
			FinSi
		FinSi
		Escribir "Se debe repetir el algoritmo:"
		Escribir "(SI) (NO)"
		leer pregunta;
	fin mientras
	
FinProceso

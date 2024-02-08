Algoritmo sin_titulo
	Definir ihora, iminutos, isegundos, alarma Como Entero;
	Definir correcto como logico;
	correcto = falso;
	
	Escribir "Ingresa hora inicial (0-23)";
	Leer ihora;
	
	Si (ihora<24)Entonces
		Escribir "Ingresa minuto inicial (0-59)";
		Leer iminutos;
		
		Si(iminutos<60)Entonces
			Escribir "Ingresa segundo inicial (0-59)";
			Leer isegundos;
			
			Si (isegundos<60)Entonces
				correcto = Verdadero;
			FinSi
		FinSi
		
	FinSi
	
	Esperar 2 Segundos;
	
	si correcto == Verdadero Entonces;
		Mientras 3>2 Hacer
			Limpiar Pantalla;
			Escribir ihora, ":",iminutos,":",isegundos;
			esperar 1 segundo;
			
			si(isegundos<60)Entonces
				isegundos = isegundos + 1;
			SiNo
				isegundos = 0;
				Si(iminutos<59)Entonces
					iminutos = iminutos + 1;
				SiNo
					iminutos = 0;
					Si(ihoras<24)Entonces
						ihora = ihora + 1;
					SiNo
						ihora = 0;
					Fin si
				FinSi
			FinSi
		FinMientras
	SiNo
		Escribir "debes ingresar todos los datos de manera correcta";
	FinSi
	
FinAlgoritmo

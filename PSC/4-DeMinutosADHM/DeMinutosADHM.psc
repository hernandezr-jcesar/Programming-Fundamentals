Proceso DeMinutosADHM
	// El siguiente algoritmo debe de recibir un nuúmero entero que corresponda a una cantidad total de minutos
	//La salida de dicho algoritmo sera clasificar dichos minutos en días, horas, y minutos
	Definir minutostotales Como Entero;
	Definir minutos, horas, dias, hrsR, diasR Como entero;
	Escribir "Este es un programa para convertir minutos a horas, dias, y minutos";
	Escribir "Ingresa el numero total de minutos";	
	leer minutostotales;
	dias = trunc(minutostotales/1440);
	diasR=(minutostotales MOD 1440);
	hrs = trunc(diasR/60);
	hrsR = (diasR MOD 60)
	minutos=hrsR
	Escribir "  " dias " días/" hrs " Horas/" minutos " Minutos";
	
FinProceso


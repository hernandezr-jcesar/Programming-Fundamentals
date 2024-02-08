#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    sleep(1);
    int hora,minuto,A,segundo,horaA,minutoA, segundoA,j=0;
    printf("Ingrese la hora de incio:\n");
    scanf("%d",&hora);
    printf("Ingrese los minutos de inicio:\n");
    scanf("%d",&minuto);
    printf("Ingrese los segundos de inicio:\n");
    scanf("%d",&segundo);
    printf("Ingrese la hora de la alarma:\n");
    scanf("%d",&horaA);
    printf("Ingrese los minutos de la alarma:\n");
    scanf("%d",&minutoA);
    printf("Ingrese los segundos de la alarma:\n");
    scanf("%d",&segundoA);
    sleep(1);
    system("cls");
    while(j<1)
    {
        if(minutoA==minuto && horaA==hora && segundoA==segundo)
        {
            A=1;
        }

        if(segundo==60)
        {
            segundo=0;
            minuto++;
        }
        if(minuto==60)
        {
            minuto=0;
            hora++;
        }
        if(hora==24)
        {
            hora=0;
        }
 
        if(segundo<10 && minuto<10 && hora<10)
        {
            printf(" Hora:     0%d:0%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo<10 && minuto<10 && hora>=10)
        {
            printf(" Hora:     %d:0%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo<10 && minuto>=10 && hora<10)
        {
            printf(" Hora:     0%d:%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo>=10 && minuto<10 && hora<10)
        {
            printf(" Hora:     0%d:0%d:%d\n", hora, minuto, segundo);
        }
        else if(segundo>=10 && minuto>=10 && hora<10)
        {
            printf(" Hora:     0%d:%d:%d\n", hora, minuto, segundo);
 
        }
        else if(segundo>=10 && minuto<10 && hora>=10)
        {
            printf(" Hora:     0%d:%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo<10 && minuto>=10 && hora>=10)
        {
            printf(" Hora:     %d:%d:0%d\n", hora, minuto, segundo);
        }
        else if(segundo>=10 && minuto>=10 && hora>=10)
        {
            printf(" Hora:     %d:%d:%d\n", hora, minuto, segundo);
        }
        if (A<12 && A!=0)
        {
            printf("\nAlarma!!!!");
            A++;
        }
        sleep(1);
        system("cls");
        segundo++;

    }
    return 0;
}
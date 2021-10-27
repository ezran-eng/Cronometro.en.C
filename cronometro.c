/*
    cronometro
*/
#include <stdio.h>
#include <windows.h> //SLEEP() recibe como parametro la cantidad de milisegundos
#include <stdlib.h>

int main() {

    //El usuario digitara en que hora o segundo va a frenar su cronometro
    int tipo;
    printf("1-Horas");
    printf("\n2-Minutos");
    printf("\n3-Segundos");
    printf("\nDigite opcion para frenar cronometro:");
    scanf("%d",&tipo);

    //EL USUARIO DIGITARA LA CANTIDAD DE HORAS, MINUTOS Y SEGUNDOS
    int cantidad;
    printf("\nDigite la cantidad:");
    scanf("%d", &cantidad);
    system("cls");

    //TRES BUCLES ANIDADOS DE TIPO FOR, 3 = horas,minutos y Segundos

    for( int hora = 0; hora <= 24; hora ++){
        for (int  minutos = 0; minutos < 60; minutos++)
        {
            for (int  segundos = 0; segundos < 60; segundos++){
                //Agregamos un intervalo de 1000ms = 1 segundos
                
                Sleep(1000);

                //Imprimir cronometro
                printf("\r %.2d : %.2d : %.2d", hora, minutos, segundos);

                //Condicional para las Horas
                if (tipo == 1 && cantidad <= hora)
                {
                    printf("\nCronometro finalizado");
                    return 0;
                }
                //Condicional para los minutos
                if (tipo == 2 && cantidad <= minutos)
                {
                    printf("\nCronometro finalizado");
                    return 0;
                }
                //Condicional para los segundos 
                if (tipo == 3 && cantidad <= segundos)
                {
                    printf("\nCronometro finalizado");
                    return 0;
                }
                
            }
        }
        
    }
    return 0;
}
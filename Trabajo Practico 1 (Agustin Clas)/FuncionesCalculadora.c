#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "FuncionesCalculadora.h"

int menuOpciones(char menu[], int opcionMin, int opcionMax)
{
    int eleccion;
    puts(menu);
    fflush(stdin);
    scanf("%d", &eleccion);

    while(eleccion<opcionMin||eleccion>opcionMax){
        printf("Error. Ingrese nuevamente la opcion elegida\n");
        fflush(stdin);
        scanf("%d", &eleccion);
    }

    return eleccion;
}

int sumar(int numeroA, int numeroB)
{
    int resultado;
    resultado=numeroA+numeroB;

    return resultado;
}

int restar(int numeroA, int numeroB)
{
    int resultado;
    resultado= numeroA-numeroB;

    return resultado;
}

float dividir(int numeroA, int numeroB)
{
    float resultado;

    if(numeroB!=0)
    {
        resultado = (float) numeroA / numeroB;
    }else
    {
        resultado=0;
    }

    return resultado;
}

int multiplicar (int numeroA, int numeroB)
{
    int resultado;
    resultado= numeroA*numeroB;

    return resultado;
}

long long int obtenerFactorial(int numeroA)
{
    long long int acumulador=1;

    for(int i = 1; i<=numeroA;i++)
    {
        acumulador= acumulador*i;
    }

    return acumulador;
}

void mostrarResultados (int numeroA, int numeroB, int suma, int resta, int producto, float division, long long int factorialA, long long int factorialB)
{
    printf("\nEl resultado de %d+%d es: %d\n",numeroA, numeroB, suma);
    printf("El resultado de %d-%d es: %d\n",numeroA, numeroB, resta);
    printf("El resultado de %d/%d es: %.2f\n", numeroA, numeroB, division);
    printf("El resultado de %d*%d es: %d\n", numeroA, numeroB, producto);
    printf("El factorial de %d es: %lli\n El factorial de %d es: %lli\n\n\n", numeroA, factorialA, numeroB, factorialB);
}

int obtenerNumero(char mensaje[])
{
    char cadenaAuxiliar[20];
    int numeroAuxiliar;
    int largoCadena;
    int respuestaIsdigit=1;
    printf(mensaje);
    fflush(stdin);
    scanf("%s", &cadenaAuxiliar);
    largoCadena=strlen(cadenaAuxiliar);

    for(int i=0;i<largoCadena;i++)
    {
        respuestaIsdigit=isdigit(cadenaAuxiliar[i]);
        if (respuestaIsdigit==0){
                break;
        }
    }

    while(respuestaIsdigit==0){
        printf("Error. Ingrese un numero correspondiente: ");
        fflush(stdin);
        scanf("%s", &cadenaAuxiliar);
        largoCadena=strlen(cadenaAuxiliar);

        for(int i=0;i<largoCadena;i++)
        {
           respuestaIsdigit=isdigit(cadenaAuxiliar[i]);
            if (respuestaIsdigit==0){
                break;
            }
        }
    }
    numeroAuxiliar=atoi(cadenaAuxiliar);

    return numeroAuxiliar;
}





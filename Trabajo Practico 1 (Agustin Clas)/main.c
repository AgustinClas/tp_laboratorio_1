#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "FuncionesCalculadora.h"

int obtenerNumero(char mensaje[]);

int main()
{
    int opcionElegida;
    int num1;
    int num2;
    int banderaNum1=1;
    int banderaNum2=1;
    int banderaOpc3=1;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    long long int resultadoFactorialA;
    long long int resultadoFactorialB;

    do{
        // Se muestra el menu y se elije una opcion
        opcionElegida = menuOpciones("CALCULADORA\n1.Ingrese primer numero\n2.Ingrese segundo numero\n3.Calcular todas las operaciones\n4.Informar resultador\n5.Salir\n", 1,5);

        switch(opcionElegida)
        {
            //caso 1 y 2 se obtienen los numeros pare realizar las operaciones
            case 1:
                num1=obtenerNumero("Ingrese el primer numero: ");
                banderaNum1=0;
                break;
            case 2:
                if(!banderaNum1)
                {
                    num2=obtenerNumero("Ingrese el segundo numero: ");
                    banderaNum2 = 0;
                }else
                {
                        printf("Primero ingresar numero 1\n");
                }
                    break;
            // se calculan todas las operaciones ocn los llamados a las funciones correspondientes
            case 3:
                if(!banderaNum2)
                {
                    resultadoSuma= sumar(num1,num2);
                    resultadoResta= restar(num1,num2);
                    resultadoDivision=dividir(num1,num2);
                    resultadoMultiplicacion=multiplicar(num1, num2);
                    resultadoFactorialA=obtenerFactorial(num1);
                    resultadoFactorialB=obtenerFactorial(num2);

                    printf("Resultados calculados!\n\n");

                    banderaOpc3=0;
                }else
                {
                    printf("Primero debe ingresar los numeros a operar\n");
                }
                    break;
                // se muestra por pantalla los resultados de las operaciones
            case 4:
                if(!banderaOpc3)
                {
                    mostrarResultados(num1, num2, resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision, resultadoFactorialA, resultadoFactorialB);
                }else
                {
                    printf("Primero se debe calcular las operaciones\n");
                }
                break;
            case 5:
                break;
        }

    }while (opcionElegida!=5);


}

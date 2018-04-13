#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


float ingNumyVal (float maximo,float minimo)
{
    printf("\n\n Ingrese n%cmero por favor, rango permitido <%.2e ; %.2e>\n",163,minimo,maximo);
    float dato;
    fflush(stdin);
    scanf("%f",&dato);
    while(dato > maximo || dato < minimo)
    {
        printf("\nEl n%cmero ingresado esta fuera de rango, ingrese n%cumero dentro del rango <%.2e ; %.2e>\n",163,163,minimo,maximo);
        fflush(stdin);
        scanf("%f",&dato);
    }

    return dato;
}

void fSuma(float numero1,float numero2)
    {
            printf("\n\n\n\tEl resultado de la suma es: %0.2f\n\n",numero1+numero2);
            system("pause");


    }

void fResta(float numero1,float numero2)
{
            printf("\n\n\n\tEl resultado de la resta es: %0.2f\n\n",numero1-numero2);
            system("pause");

}

void fDivision(float dividendo,float divisor)
{


            if (divisor ==0.00)
            {
                printf("\n\n\t\tEl divisor debe ser distinto de cero para que la operaci%cn de un valor l%cgico, por favor vuelva a ingresar el segundo n%cmero\n\n\n",162,162,163);
                system("pause");


            }
            else
            {
                printf("\n\n\n\tEl resultado de la divisi%cn es: %0.2f\n\n",162,dividendo/divisor);
                system("pause");

            }


}

void fFactorial(float numero, int maxF)
{
    double factorial=1;

    if(esEntero(numero)==1)
    {
        printf("\n\n\nEl n%cmero ingresado no es entero, debe ingresar un n%cmero natural para poder realizar la operacion factorial\n\n\n%d",163,163);
        system("pause");
    }

        else
        {

            if(numero < 0)

                {
                    printf("No se puede realizar el factorial de un n%cmero negativo, favor vuelva a ingresar un n%cmero v%clido\n\n\n",163,163,160);
                    system("pause");


                }
                    else
                       {

                        if(numero > maxF)
                            {
                                printf("El n%cmero ingresado supera el rango permitido para realizar la operaci%cn factorial, por favor ingrese un n%cmuero menor a %d\n\n\n", 163,162,163,maxF+1);
                                system("pause");
                            }

                            else
                                  {

                                if (numero == 0 || (int)numero == 1)
                                    {
                                        printf("\n\n\n\tEl resultado del factorial es: 1\n\n");
                                        system("pause");
                                    }

                                        else
                                            {
                                                for (int i=numero;i>1;i--)
                                                        {
                                                            factorial=factorial*i;
                                                        }
                                                            printf("\n\n\n\tEl resultado del factorial es: %.0f\n\n",factorial);
                                                            system("pause");

                                            }
                                  }
                       }
        }
    }

void fMultiplicacion(float numero1,float numero2)
{


        printf("\n\n\n\tEl resultado de la multiplicaci%cn es: %0.2f\n\n",162,numero1*numero2);
        system("pause");


}

int val2opciones(int op1,int op2)
{
    if((op1==0 && op2==0) || (op1==0 && op2==1))
        {
            return 0;
        }

    if(op1==1 && op2==0)
        {
            return 1;
        }

    if(op1==1 && op2==1)
    {
        return 2;
    }
}

void MenFin()
{
    system("cls");
    printf("\n\n\n\t\t\t***************************************************");
    printf("\n\n\n\t\t\t**********GRACIAS POR USAR LA CALCULADORA**********");
    printf("\n\n\n\t\t\t***************************************************\n\n\n");
}

void error_0(void)
{
    printf("\n\n\nPor favor, primero ingrese los datos para realizar la operaci%cn requerida \n\n\n",162);
    system("pause");
}

int esEntero (float num)
{
    int aux;
    float dec;

    aux = (int)num;
    dec = num-aux;

    if (dec==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}


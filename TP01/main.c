#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
#include <float.h>


#define MAX_F 26



int main()
{
    char seguir='s';
    int opcion;
    int opcion1=0;
    int opcion2=0;
    float numero1;
    float numero2;



    while(seguir=='s')
    {
        system("cls");

        if(opcion1==0 && opcion2==0)
        {
        printf("\n\n\n\n\t\t1- Ingresar 1er operando (A=x)\n");
        printf("\t\t2- Ingresar 2do operando (B=y)\n");
        printf("\t\t3- Calcular la suma (A+B)\n");
        printf("\t\t4- Calcular la resta (A-B)\n");
        printf("\t\t5- Calcular la division (A/B)\n");
        printf("\t\t6- Calcular la multiplicacion (A*B)\n");
        printf("\t\t7- Calcular el factorial (A!)\n");
        printf("\t\t8- Calcular todas las operacione\n");
        printf("\t\t9- Salir\n");


        }

        if(opcion1==1 && opcion2==0)
        {
        printf("\n\n\n\n\t\t1- Ingresar 1er operando (A=%.2f)\n",numero1);
        printf("\t\t2- Ingresar 2do operando (B=y)\n");
        printf("\t\t3- Calcular la suma (%.2f+B)\n",numero1);
        printf("\t\t4- Calcular la resta (%.2f-B)\n",numero1);
        printf("\t\t5- Calcular la division (%.2f/B)\n",numero1);
        printf("\t\t6- Calcular la multiplicacion (%.2f*B)\n",numero1);
        printf("\t\t7- Calcular el factorial (%.2f!)\n",numero1);
        printf("\t\t8- Calcular todas las operacione\n");
        printf("\t\t9- Salir\n");


        }

        if(opcion1==1 && opcion2==1)
        {
        printf("\n\n\n\n\t\t1- Ingresar 1er operando (A=%.2f)\n",numero1);
        printf("\t\t2- Ingresar 2do operando (B=%.2f)\n",numero2);
        printf("\t\t3- Calcular la suma (%.2f+%.2f)\n",numero1,numero2);
        printf("\t\t4- Calcular la resta (%.2f-%.2f)\n",numero1,numero2);
        printf("\t\t5- Calcular la division (%.2f/%.2f)\n",numero1,numero2);
        printf("\t\t6- Calcular la multiplicacion (%.2f*%.2f)\n",numero1,numero2);
        printf("\t\t7- Calcular el factorial (%.2f!)\n",numero1);
        printf("\t\t8- Calcular todas las operacione\n");
        printf("\t\t9- Salir\n");
        }

        if(opcion1==0 && opcion2==1)
        {
        printf("\n\n\n\n\t\t1- Ingresar 1er operando (A=x)\n");
        printf("\t\t2- Ingresar 2do operando (B=%.2f)\n",numero2);
        printf("\t\t3- Calcular la suma (A+%.2f)\n",numero2);
        printf("\t\t4- Calcular la resta (A-%.2f)\n",numero2);
        printf("\t\t5- Calcular la division (A/%.2f)\n",numero2);
        printf("\t\t6- Calcular la multiplicacion (A*%.2f)\n",numero2);
        printf("\t\t7- Calcular el factorial (A!)\n");
        printf("\t\t8- Calcular todas las operacione\n");
        printf("\t\t9- Salir\n");
        }
        fflush(stdin);
        scanf("%d",&opcion);

        while(opcion < 1 || opcion > 9)
        {
            printf("\n\n\t Rango inv%clido, favor de volver a ingresar opci%cn: ",160,162);
            fflush(stdin);
            scanf("%d",&opcion);
        }


        switch(opcion)
        {
            case 1:
                numero1=ingNumyVal(FLT_MAX ,-FLT_MAX);
                opcion1=1;
                break;
            case 2:
                numero2=ingNumyVal(FLT_MAX ,-FLT_MAX);
                opcion2=1;
                break;
            case 3:
                if(val2opciones(opcion1,opcion2)==2)
                {
                    fSuma(numero1,numero2);
                }
                else
                {
                    error_0();
                }

                break;
            case 4:
                if(val2opciones(opcion1,opcion2)==2)
                {
                    fResta(numero1,numero2);
                }
                else
                {
                    error_0();
                }

                break;
            case 5:
                if(val2opciones(opcion1,opcion2)==2)
                {
                    fDivision(numero1,numero2);
                }
                else
                {
                    error_0();
                }

                break;
            case 6:
                if(val2opciones(opcion1,opcion2)==2)
                {
                    fMultiplicacion(numero1,numero2);
                }
                else
                {
                    error_0();
                }
                break;
            case 7:
                if(val2opciones(opcion1,opcion2)==1 || val2opciones(opcion1,opcion2)==2 )
                {
                    fFactorial(numero1,MAX_F);
                }
                else
                {
                    error_0();
                }

                break;
            case 8:
                if(val2opciones(opcion1,opcion2)==2)
                {
                    fSuma(numero1,numero2);
                    fResta(numero1,numero2);
                    fDivision(numero1,numero2);
                    fMultiplicacion(numero1,numero2);
                    fFactorial(numero1,MAX_F);
                }
                if(val2opciones(opcion1,opcion2)==1)
                {
                    fFactorial(numero1,MAX_F);
                }
                if(val2opciones(opcion1,opcion2)==0)
                {
                    error_0();
                }

                break;
            case 9:
                seguir = 'n';
                MenFin();
                break;
        }

    }
    return 0;
}

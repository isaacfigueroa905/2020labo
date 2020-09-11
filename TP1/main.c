
#include <stdlib.h>
#include "funciones.h"


int main()
{
    float primerNumero;
    float segundoNumero;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int opcion;
    long int  numero;
    long int factorial;
    long int otroFactorial;
    long int otroNumero;
    int banderaDelTres;


    banderaDelTres=0;

    printf("...CALCULADORA!!!\n");



    do
    {
        printf("   seleccione una opcion:\n");
        printf("\n 1: Ingresar 1er. operando (A=X).\n 2: Ingresar 2do. operando (B=Y).\n 3: Calcular todas las operaciones.\n 4: Informar resultados.\n 5: Salir.\n " );
        scanf("%d", &opcion);

        while(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4 && opcion!=5)
        {
            printf("ERROR, seleccione una opcion valida:\n");
            printf(" 1: Ingresar 1er. operando (A=).\n 2: Ingresar 2do. operando (B=).\n 3: Calcular todas las operaciones.\n 4: Informar resultados.\n 5: Salir.\n ");
            scanf("%d", &opcion);
        }

        switch(opcion)
        {
            case 1:
                printf("ingresar primer operando: A= ");
                scanf("%f", &primerNumero );
                printf("     A=%.2f\n",primerNumero);




                break;

            case 2:
                printf("ingresar segundo operando: B= ");
                scanf("%f", &segundoNumero );
                printf("     B=%.2f\n", segundoNumero);




                break;

            case 3:


                printf("Calculando operaciones!...\n");

                printf("\n -A.. suma de (A+B)");

                printf("\n -B.. resta de (A+B)");

                printf("\n -C.. division(A/B)");

                printf("\n -D.. multiplicacion(A*B)");

                printf("\n -E.. factorial (A!) (B!)\n ");


                suma=SumarNumeros(primerNumero,segundoNumero);//suma

                resta=RestarNumeros(primerNumero,segundoNumero);//resta


                if(segundoNumero!=0)//division evitando o como cociente
                {
                   division=DividirNumeros(primerNumero,segundoNumero);
                }


                multiplicacion=MultiplicarNumeros(primerNumero,segundoNumero);//multiplicacion



                //factorial


                numero=(long int)primerNumero;
                otroNumero=(long int)segundoNumero;
                factorial=CalcularFactorial(numero);
                otroFactorial=CalcularFactorial(otroNumero);


                banderaDelTres=1;




                break;

            case 4:

                if(banderaDelTres==0)
                {
                    printf("\n\n\n Ups!!! Para mostrar resultados primero seleccione opcion 3!!!\n");


                }
                else
                {

                    printf("\n\nResultados:");
                    printf("\n A- El resultado de %.2f + %.2f es: %.2f", primerNumero,segundoNumero,suma);
                    printf("\n B- El resultado de %.2f - %.2f es: %.2f",primerNumero,segundoNumero,resta);

                    if(segundoNumero!=0)
                    {
                        printf("\n C- El resultado de %.2f / %.2f es: %.2f",primerNumero,segundoNumero,division);
                    }
                    else
                    {
                        printf("\n C-ERROR MATEMATICO!!!...No es posible dividir entre 0");
                    }

                    printf("\n D- El resultado de %.2f * %.2f es: %.2f",primerNumero,segundoNumero,multiplicacion);

                    printf("\n E- El factorial de %ld es: %ld  y El factorial de %ld es: %ld\n\n   ", numero, factorial, otroNumero, otroFactorial);






                }


                    break;


            case 5:
                printf("SALIENDO!!!");
                break;


                }


    }while(opcion!=5);



    return 0;
}


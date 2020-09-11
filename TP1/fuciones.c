#include "funciones.h"


int SumarNumeros(int primerNumero, int segundoNumero)
{
    int suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

int RestarNumeros(int primerNumero, int segundoNumero)
{
    int resta;
    resta = primerNumero - segundoNumero;
    return resta;
}

int MultiplicarNumeros(int primerNumero, int segundoNumero)
{
    int multiplicacion;
    multiplicacion= primerNumero* segundoNumero;
    return multiplicacion;
}


int DividirNumeros(int primerNumero, int segundoNumero)
{
    float division;
    division = primerNumero/segundoNumero;
    return division;
}

int CalcularFactorial(int unicoNumero)
{

    int resultado;

    if(unicoNumero==0)
    {

        resultado=1;
    }
    else
    {

        resultado=unicoNumero*CalcularFactorial(unicoNumero-1);
    }
    return resultado;

}

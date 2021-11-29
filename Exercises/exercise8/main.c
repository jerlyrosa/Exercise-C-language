// Realiza un programa que separe las funciones del archivo principal(main) y que sea utilizado de manera externa, puede trabajar con las funciones de los ejercicios 7

#include <stdio.h>
#include <stdlib.h>


int main()
{
    #include "funciones.h"
    int a = 5;
    int b = 4;


    printf("La suma es: %d \n",  FuncionSumar(a,b));
    printf("La resta es: %d \n", FuncionRestar(a,b));
    printf("La multiplicacion es: %d \n", FuncionMultiplicar(a,b));
    printf("La division es: %d \n", FuncionDividir(a,b));

    return 0;
}



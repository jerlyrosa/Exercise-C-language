// La empresa sorteo de colores lo contrata para que usted determine la probabilidad en que salga un globo de un determinado color tomando en cuenta los siguiente:
// cantidad de globos azules 5, globos rojos 4, globos negros 2 amarillo 1
// Para tales fines debe usar la formula

//                          tamaño del espacio del evento
// probabilidad =    ------------------------------
//                           tamaño del espacio muestral

//                        5
// probabilidad_azules = ___ * 100
//                       12

// Debe crear un programa que determine:

// Probabilidad de que salga un globo azul.

// Probabilidad de que salga un globo rojo.

// Probabilidad de que salga un globo negro o amarillo.

#include <stdio.h>

float ProbabilidadGlobos(int a, float b)
{
    return (a / b) * 100;
}

int main()
{

    float espacio;
    int globosAzules = 5;
    int globosRojos = 4;
    int globosNegros = 2;
    int globosAmarillo = 1;

    printf("Introduzca el valor del espacio: ");
    scanf("%f", &espacio);

    printf("La probabilidad que salga azul es: %.2f%% \n", ProbabilidadGlobos(globosAzules, espacio));

    printf("La probabilidad que salga rojo es: %.2f%% \n", ProbabilidadGlobos(globosRojos, espacio));

    printf("La probabilidad que salga negro es: %.2f%% \n", ProbabilidadGlobos(globosNegros, espacio));

    printf("La probabilidad que salga amarrillo es: %.2f%%  \n", ProbabilidadGlobos(globosAmarillo, espacio));

    return 0;
}

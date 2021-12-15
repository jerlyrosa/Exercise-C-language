// Escriba un programa  en Lenguaje C que pregunte al usuario la hora actual t del reloj y un número entero de horas h, que indique qué hora marcará el reloj dentro de h horas:

// Ejemplo 1 de Salida del Programa:

// Hora actual: 10

// Cantidad de horas: 3

// En 3 horas, el reloj marcara las 1 

// ----------------------------------------------------------------------------------------------------------------

// Ejemplo 2 de Salida del Programa:

// Hora actual: 4

// Cantidad de horas: 18

// En 18 horas, el reloj marcara las 10

#include <stdio.h>
int main() {

int t,h,result;

 printf("Hora actual: ");
    scanf("%d",&t);
 printf(" Cantidad de horas: ");
    scanf("%d",&h);
 
result = (t + h) %12;
 printf("En %d horas, el reloj marcara las  %d  \n",t, result);


   return 0;
}
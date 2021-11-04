// 1) Declarar 3 variables del tipo entero: Valor1,Valor2 y resultado

// 2)  Leer a Valor1 y Valor2 y mostrarlo en resultado mediante las siguientes salidas:

//   1) resultado =  Valor1 + Valor2 imprimir el resultado.

//   2) resultado =  Valor1 - Valor2 imprimir el resultado.

//    3) resultado =  Valor1 * Valor2 imprimir el resultado.

//    4) resultado =  Valor1 / Valor2 imprimir el resultado.

#include <stdio.h>
int main() {
    int value1, value2, result;
    printf("Introduzca un valor: ");
    scanf("%d",&value1);

    printf("Introduzca el segundo valor: ");
    scanf("%d",&value2);

   result = value1 + value2;
   printf("El valor de la suma es: %d \n", result);

      result = value1 - value2;
   printf("El valor de la resta  es: %d \n", result);

      result = value1 * value2;
   printf("El valor  de la multiplicación es: %d \n", result);

      result = value1 / value2;
   printf("El valor de la division es: %d \n", result);
   return 0;
}

// Utiliza el bucle for, crea un programa que imprima los números impares del 1 al 17 sin incluir el 15.

#include <stdio.h>

int main()
{
  int x=0;
  for (x=0; x<=17; x++){
    if (x % 2 != 0 && x != 15){
           printf (" %d \n", x);
    }
  }
    return 0;
}


// Utiliza el bucle do while, realiza un programa que imprima la tabla de multiplicación de cualquier número leido por teclado

#include <stdio.h>


int main()
{
  int valor_tabla, valor_usuario, contador=1;
    printf("Introduzca el valor de la tabla que desea imprimir valor: ");
    scanf("%d",&valor_usuario);

    do
    {
      valor_tabla = valor_usuario * contador;
      printf("\n %d x %d = %d",valor_usuario,contador, valor_tabla);
      contador++;
    } while (contador <= 12);
    
    
    return 0;
}

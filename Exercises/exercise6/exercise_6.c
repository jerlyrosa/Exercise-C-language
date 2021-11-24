
// 5.- Relaiza un programa que permita introducir la edad de 10 personas y determine cuantos son mayores  y menores de edad(para esto necesita hacer uso de if).

#include <stdio.h>

int main()
{
    int personas = 5;
    int count = 0;
    int edades;
    int mayores = 0;
    int menores = 0;

    for (count; count < personas; count++)
    {
        printf("Introduzca la edad de una persona:");
        scanf("%d", &edades);

        if (edades >= 18)
        {
            mayores += 1;
        }
        else
        {
            menores += 1;
        }
    }

    printf("Se de termino que hay un total %d personas mayores y %d personas menores \n", mayores, menores);

    return 0;
}

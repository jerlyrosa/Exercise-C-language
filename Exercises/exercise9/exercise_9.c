// La empresa Global System Dominicana, lo contrata para que realice un programa en Lenguaje C  que determine el sueldo netos de sus empleado, tomando en cuenta las siguientes variables:

// SB: es el sueldo bruto

// AFP: administradora de fondo de pensiones es el 7% del SB

// ARS: Administradora de riesgo de salud es el 5% del SB

// T_DESC: total descuento es la suma de AFP + ARS

// Sueldo_Neto: el SB -  T_DESC

#include <stdio.h>
int main()
{
    int SB, AFP, ARS, T_DESC, Sueldo_Neto;

    printf("Introduzca el valor del sueldo: ");
    scanf("%d", &SB);

    AFP = SB * 0.07;
    ARS = SB * 0.05;
    T_DESC = AFP + ARS;
    Sueldo_Neto = SB - T_DESC;
    printf("El valor del sueldo neto es:  %d \n", Sueldo_Neto);

    return 0;
}

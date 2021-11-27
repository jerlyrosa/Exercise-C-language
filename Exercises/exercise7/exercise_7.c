//  Escribe en lenguaje C, un programa que realice las 4 operaciones básicas de matemáticas.

// FuncionSuma(a,b)

// FuncionResta(a,b)

// FuncionMultiplica(a,b)

// FuncionDivide(a,b)

#include <stdio.h>

//Funcion Sumar 
int FuncionSumar(int a, int b){
    return a + b;
}
//Funcion Restar
int FuncionRestar(int a, int b){
    return a - b;
}

//Funcion Multiplicar 
int FuncionMultiplicar(int a, int b){
    return a * b;
}

//Funcion Dividir
int FuncionDividir(int a, int b){
    return a / b;
}


int main()

{
    int a = 5;
    int b = 4;

    printf("La suma es: %d \n", FuncionSumar(a,b));
    printf("La resta es: %d \n", FuncionRestar(a,b));
    printf("La multiplicacion es: %d \n", FuncionMultiplicar(a,b));
    printf("La division es: %d \n", FuncionDividir(a,b));

    return 0;
}



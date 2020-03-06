#include<stdio.h>
#include<cs50.h>

int suma_dos_enteros(int a, int b);

int main(void)
{
    int a, b, suma;
    a = get_int("Ingrese el primer valor: ");
    b = get_int("Ingrese el segundo valor: ");
    suma = suma_dos_enteros(a, b);
    printf("resultado: %d \n", suma);
}

int suma_dos_enteros(int a, int b)
{
    int suma = 0;
    if (a > 0)
        for (int i = 0; i < a; suma++, i++);
    else
        for (int i = a; i < 0; suma--, i++);
    if (b > 0)
        for (int i = 0; i < b; suma++, i++);
    else
        for (int i = b; i < 0; suma--, i++);

    return suma;
}
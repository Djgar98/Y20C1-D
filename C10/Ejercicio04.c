/*
Escribe un programa que guarde n cantidad de números enteros en un arreglo
y los imprima en el orden contrario.
*/
#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int numero[100];
    int i;
    int x = get_int("Ingrese la cantidad de elemento: ");

    for( i=0; i < x; i++)
    {
        numero[i]=get_int("Ingrese los numeros: ");
    }
    for(i=0;i<x;i++)
    {
        printf("%i ",numero[i]);
    }
    printf("\n");
    for( i=x-1; i >= 0; i--)
    {
        printf("%i ",numero[i]);
    }
}
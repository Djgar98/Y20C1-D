#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = 40;
    int *puntero;
    puntero = &a;

    printf("Valor de la Variable a: %d\n", a);
    printf("La posicion de la variable a: %p\n", &a);
    printf("Valor del puntero: %d\n", *puntero);
    printf("Posicion del puntero: %p\n", puntero);
    
    return 0;
}
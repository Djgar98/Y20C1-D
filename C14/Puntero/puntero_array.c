#include <stdio.h>

int main(void)
{
    char arre[] = {30, 54, 10, 2, 10, 3, 60, 13, 16, 2};
    char *arp;

    arp = arre;

    // No hace falta usar arp = &arre porque...
    // resulta que un arreglo, en realidad, es un puntero :o

    for (int i = 0; i < 10; i++)
    {
        printf("El valor = %d\n", *arp);
        printf("La posición del puntero = %p\n", arp);
        arp++;
    }

    return 0;
}
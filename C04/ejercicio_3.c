#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("a? ");
    int b = get_int("b? ");

    int suma = a + b;

    printf("La suma es %d\n", suma);
    return 0;
}
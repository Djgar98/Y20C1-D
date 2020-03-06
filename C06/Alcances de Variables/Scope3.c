#include <stdio.h>

int prueba_variables(int x);
int main(void)
{
    int auxiliar = 4;
    auxiliar = prueba_variables(auxiliar);
    printf("%d\n", auxiliar);
}

int prueba_variables(int x)
{
    return x *= 3;
}s
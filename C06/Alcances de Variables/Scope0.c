#include<stdio.h>

// Declaracion
int prueba_variables(int x);
int main(void)
{
    int result	= prueba_variables(5);
    printf("%d \n", result);
}

int prueba_variables(int x)
{
    return x	* 3;
}
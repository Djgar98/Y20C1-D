#include <stdio.h>

// Declaracion
void prueba_variables();

float global = 0.5050;

int main(void)
{
    prueba_variables();
    printf("%.5f\n", global);
}

void prueba_variables(void)
{
    global *= 3;
}
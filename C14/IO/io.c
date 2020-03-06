#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nombre = get_string("¿Cual es tu nombre? \n");
    printf("Hola, %s\n", nombre);
}

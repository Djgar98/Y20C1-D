#include<stdio.h>
#include<cs50.h>

void swap_incorrecto(int a, int b);
void swap_correcto(int* a, int* b);

int main (void)
{
    int num1 = 5, num2 = 3;

    swap_incorrecto(num1, num2);
    printf("num1: %d, num2: %d\n", num1, num2);

    swap_correcto(&num1, &num2);
    printf("num1: %d, num2: %d\n", num1, num2);

    return 0;
}

void swap_incorrecto(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

}
void swap_correcto(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
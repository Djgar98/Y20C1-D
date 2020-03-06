#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int array[10][10], sum = 1;
    for (int i = 0 ; i < 10 ; i++)
    {
        for (int j = 0 ; j < 10; j++)
        {
            array[i][j] = sum++;
        }
    }
    for (int i = 0 ; i < 10 ; i++)
    {
        for (int j = 0 ; j < 10; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <time.h>

int main(void)
{
    int array[3][3];
    time_t t;
    srand((unsigned) time(&t));

    for (int i = 0 ; i < 3; i++)
    {
        for (int j = 0 ; j < 3; j++)
        {
            array[i][j] = rand() % 100;
        }
    }
    printf("Matriz original: \n");
    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz traspuesta: \n");
    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3; j++)
        {
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }

}
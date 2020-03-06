#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int nota = get_int("nota ? ");

    if(nota > 59){
        printf("Aprobaste!\n");
    }else{
        printf("Reprobaste!");
    }
    return 0;
}
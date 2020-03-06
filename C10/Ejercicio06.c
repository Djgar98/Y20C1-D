#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = get_int("Ingresa la cantidad de elementos a registrar: ");
    int a[n];
    printf("Ingresa los datos:\n");
    for (int i = 0; i != n; i++)
    {
        a[i] = get_int("elemento %d: ", i + 1);
    }

    printf("Los elementos no duplicados fueron:\n");
    for (int i = 0; i != n; i++)
    {
        bool ok = true;
        for (int j = 0; j != n; j++)
        {
            if (a[i] == a[j] && i != j)
                ok = false;
        }
        if (ok)
            printf("%d\n", a[i]);
    }

    return 0;
}
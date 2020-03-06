#include <stdio.h>

void fusion(int low, int mid, int high);
void ordenar(int low, int high);

int a[11] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0};
int b[11];

#define MAX 10

int main(void)
{
    printf("Datos no ordenados:\n");
    for (int i = 0; i <= MAX; i++)
    {
        printf("%d ", a[i]);
    }

    ordenar(0, MAX);

    printf("\n\nDatos ordenados de forma ascendente:\n");
    for (int i = 0; i <= MAX; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}

void fusion(int low, int mid, int high)
{
    int l1, l2, i;

    for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
    {
        if (a[l1] <= a[l2])
        {
            b[i] = a[l1++];
        }
        else
        {
            b[i] = a[l2++];
        }
    }

    while (l1 <= mid)
    {
        b[i++] = a[l1++];
    }

    while (l2 <= high)
    {
        b[i++] = a[l2++];
    }

    for (i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void ordenar(int low, int high)
{
   int mid;
   if (low < high)
   {
      mid = (low + high) / 2;

      // Ordenamos la mitad izquierda
      ordenar(low, mid);

      // Ahora ordenamos la mitad derecha
      ordenar(mid + 1, high);

      // Una vez ordenadas ambas mitades, las fusionamos
      fusion(low, mid, high);
   }
}
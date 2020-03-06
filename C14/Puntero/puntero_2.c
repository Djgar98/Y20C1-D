#include <stdio.h>

int  main (void)
{
    int y = 5, z = 3,  *nptr, *mptr;
    printf("valor de y = %d, z = %d\n",y,z);
    nptr = &y;
    printf("posición de nptr = %p\n",nptr);
    z = *nptr;
    printf("valor de z = %d\n",z);
    *nptr = 7;
    printf("valor de y = %d\n",*nptr);
    mptr = nptr;
    printf("posición de mptr = %p\n",mptr);
    mptr = &z;
    printf("posición de mptr = %p\n",mptr);
    *mptr = *nptr;
    printf("valor de mptr = %d\n",*mptr);
    y = (*nptr) + 1;
    printf("valor de y = %d\n",y);

}

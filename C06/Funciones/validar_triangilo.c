#include<stdio.h>
#include<cs50.h>

bool validar_triangulo(float x, float y, float z);

int main(void)
{
    int x, y, z;
    bool validacion;
    x = get_int("Ingrese el primer lado: ");
    y = get_int("Ingrese el segundo lado: ");
    z = get_int("Ingrese el tercer lado: ");
    validacion = validar_triangulo(x, y, z);

    if (validacion == true)
    {
        printf("¡Si es un triangulo! \n");
    }
    else
    {
        printf("¡No es un triangulo! \n");
    }
}
// false es equivalente a 0 y true es equivalente 1
bool validar_triangulo(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }

    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }
    return true;
}s
// En este archivo se indican las entradas y salidas estandar de un programa
// teniendo en cuenta las funciones básicas para dichas actividades.

#include <stdio.h>

int main(void)
{
    // abre el archivo "input.txt" en modo de solo lectura
    FILE *in = fopen("input.txt", "r");

    // siempre asegúrate de que fopen() no retorne NULL!
    if (in == NULL)
    {
        return 1;
    }
    else
    {
        // abre el archivo "output.txt" en modo de escritura únicamente.
        FILE *out = fopen("output.txt", "w");

        // asegúrate de que puedas abrir el archivo.
        if (out == NULL)
        {
            return 2;
        }

        int c = 0;
        do
        {
            // obten un caracter
            c = fgetc(in);
            // Escribe el caracter a un archivo de salida.
            fputc(c, out);
        }
        while (c != EOF);

        // ¡Cierra los archivos para evitar fugas de memoria!
        fclose(in);
        fclose(out);
    }
}
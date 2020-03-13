#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "ll.h"

void insertar(int nuevo_dato);
void eliminar_nodo(int elemento);
void print_list(node *nodo_actual);

node *cabeza = NULL;

int main(void)
{
    int n = get_int("¿Cuantos datos quieres ingresar?\n");

    cabeza = malloc(sizeof(node));
    cabeza->next = NULL;

    printf("\n");
    for (int i = 0, tmp = 0; i < n; i++)
    {
        tmp = get_int("Elemento %d: ", i + 1);
        insertar(tmp);
    }

    printf("\nElementos en la lista:\n");
    print_list(cabeza);

    printf("\n");
    int objetivo = get_int("Elimina el elemento: ");
    eliminar_nodo(objetivo);

    printf("Elementos en la lista:\n");
    print_list(cabeza);

    objetivo = get_int("\nAgrega otro elemento: ");
    insertar(objetivo);

    printf("Elementos en la lista:\n");
    print_list(cabeza);

    // Liberar memoria
    node *ptr = cabeza;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}

void insertar(int nuevo_dato)
{
    if (cabeza->data)
    {
        // 1. asignar memoria para el nuevo nodo
        node *nuevo_nodo = malloc(sizeof(node));
        nuevo_nodo->next = NULL;

        // 2. insertar el dato
        nuevo_nodo->data = nuevo_dato;

        // 3. "next" del nuevo nodo es la actual cabeza
        nuevo_nodo->next = cabeza;

        // 4. Cabeza ahora apunta al nuevo nodo
        cabeza = nuevo_nodo;
    }
    else
    {
        cabeza->data = nuevo_dato;
    }
}

void eliminar_nodo(int elemento)
{
    // Guardar el nodo cabeza
    node *temp = cabeza;
    node *prev = NULL;

    // Si la cabeza misma contiene la llave a ser eliminada
    if (temp && temp->data == elemento)

        // Cambiar cabeza
        cabeza = temp->next;

        // Liberar anterior cabeza
        free(temp);
        return;
    }

    //Buscar la llave a ser eliminada, mantener seguimiento del nodo anterior ya que necesitamos cambiar 'prev->next’
    while (temp && temp->data != elemento)
    {
        prev = temp;
        temp = temp->next;
    }

    // Si la clave no estaba presente en la lista
    if (!temp)
    {
        return;
    }

    // Desenlazar el nodo de la lista
    prev->next = temp->next;

    // Liberar memoria
    free(temp);
}

void print_list(node *nodo_actual)
{
    if (nodo_actual->next != NULL)
    {
        print_list(nodo_actual->next);
    }

    if (nodo_actual)
    {
        printf("%d\n", nodo_actual->data);
    }
}
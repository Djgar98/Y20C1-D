typedef struct node
{
    int dato;
    struct node *siguiente;
    struct node *prev;
}
node;

// Puntero al nodo cabeza (alcance global).
// Lista vacía. Cabeza apunta a NULL
node *cabeza = NULL;

// Crea un nuevo nodo y retorna un puntero hacia dicho nodo
node* crear_nuevo_nodo(int x)
{
    node *nuevo_nodo = malloc(sizeof(node));
    nuevo_nodo->dato = x;
    nuevo_nodo->prev = NULL;
    nuevo_nodo->siguiente = NULL;
    return nuevo_nodo;
}

// Inserta un nodo en la cabeza de la lista doblemente enlazada
void insertar_en_cabeza(int x)
{
    node *nuevo_nodo = crear_nuevo_nodo(x);
    if (cabeza == NULL)
    {
        cabeza = nuevo_nodo;
        return;
    }
    cabeza->prev = nuevo_nodo;
    nuevo_nodo->siguiente = cabeza;
    cabeza = nuevo_nodo;
}

// Inserta un nodo en la cola de la lista doblemente enlazada
void insertar_en_cola(int x)
{
    node *temp = cabeza;
    node *nuevo_nodo = crear_nuevo_nodo(x);
    if (cabeza == NULL)
    {
        cabeza = nuevo_nodo;
        return;
    }

    // Ir al último nodo
    while (temp->siguiente != NULL)
    {
        temp = temp->siguiente;
    }
    temp->siguiente = nuevo_nodo;
    nuevo_nodo->prev = temp;
}

// Imprime todos los elementos en la lista de inicio (cabeza) a fin (cola)
void imprimir()
{
    node *temp = cabeza;
    printf("Elementos en orden: ");
    while (temp != NULL)
    {
        printf("%d ", temp->dato);
        temp = temp->siguiente;
    }
    printf("\n");
}

// Imprime todos los elementos en la lista de fin (cola) a inicio (cabeza)
void imprimir_en_reversa(node *nodo_actual)
{
    if (nodo_actual == cabeza)
    {
        printf("Elementos en reversa: ");
    }

    // Ir al último nodo
    if (nodo_actual->siguiente != NULL)
    {
        imprimir_en_reversa(nodo_actual->siguiente);
    }

    // Verificar si lista está vacía
    if (nodo_actual)
    {
        printf("%d ", nodo_actual->dato);
    }

    if (nodo_actual == cabeza)
    {
        printf("\n");
    }
}
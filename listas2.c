
#include <stdio.h>
#include <stdlib.h>
 /* Linea Unica*/
 
/* Estructura de datos para almacenar un nodo de lista enlazada*/
struct Node
{
    int data;
    struct Node* next;
};
 
/* Función auxiliar para devolver un nuevo nodo de lista enlazada del heap*/
struct Node* newNode(int data, struct Node* nextNode)
{
    /* asignar un nuevo nodo en un heap y configurar sus datos*/
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
 
    /* establece el puntero `.next` del nuevo nodo para que apunte al actual
     primer nodo de la lista.*/
    node->next = nextNode;
 
    return node;
}
 
/* Función ingenua para la implementación de listas enlazadas que contienen tres nodos*/
struct Node* constructList()
{
    struct Node* head = newNode(1, newNode(2, newNode(3, NULL)));
    return head;
}
 
/* Función auxiliar para imprimir una lista enlazada*/
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL");
}
 
int main(void)
{
    /* `head` apunta al primer nodo (también conocido como nodo principal) de una lista enlazada*/
    struct Node* head = constructList();
 
    /* imprimir lista enlazada*/
    printList(head);
 
    return 0;
}
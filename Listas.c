#include <stdio.h>
#include <stdlib.h>
/* metodo ingenuo primero se crean los nodos y al final se enlazan */
/* Estructura de datos para almacenar un nodo de lista enlazada*/
struct Node
{
	int data;
	struct Node*next;
};
/* Funcion auxiliar para devolver un nuevo nodo de lista enlazada del heap*/
struct Node* newNode(int data)
{
	/*Asignar un nuevo nodo en un heap y configurar sus datos*/
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data= data;
	/*El puntero ´.next´ del nuevo nodo no apunta a nada*/
	node->next = NULL;
	return node;
}
/*Funcion ingenua para la implementacion de listas enlazadas que contienen tres nodos*/
struct Node* constructList()
{
	/*Construye tres nodos de lista enlazador*/
	struct Node* first = newNode(1);
	struct Node* second = newNode(2);
	struct Node* third = newNode(3);
	struct Node* head = first;
	first-> next = second;
	second-> next = third;
	return head;
}
void printlist(struct Node*head)
{
	struct Node* ptr = head;
	while(ptr)
	{
		printf("%d ->", ptr->data);
		ptr= ptr->next;
	}
	printf("NULL");
}
int main(void)
{
	struct Node* head = constructList();
	printlist(head);
	return 0;
}
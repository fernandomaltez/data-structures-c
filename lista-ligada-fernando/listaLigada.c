#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    Node *prx;
}Node;

typedef struct List{
    
    unsigned int lenght;
    Node *start;
    Node *end;

}List;

Node *criarNode(int data)
{
    Node *novoNode = malloc(sizeof(Node));

    if(novoNode == NULL)
    {
        puts("Erro na alocação de memória");

        return NULL;
    }

    novoNode->data = data;

    novoNode->prx = NULL;

    return novoNode;
}


List *criaLista()
{
    List *novaLista = (List *) malloc(sizeof(List));

    if(novaLista == NULL)
    {
        puts("Erro de alocação");

        return NULL;
    }

    novaLista->lenght = 0;

    novaLista->start = NULL;

    novaLista->end = NULL;

    return novaLista;
}

List insertStart(Node* newNode, List* lista)
{
    
    
    if(lista->lenght == 0)
    {
        lista->start = newNode;
        lista->end = newNode;
        lista->lenght = 1;
    }

    else
    {
        newNode->prx = lista->start;
        lista->start = newNode;
        lista->lenght++;
    }
}







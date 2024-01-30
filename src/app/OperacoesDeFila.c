#include "../includes/QueueOperations.h"

element* createElement(void)
{
    int value = 0;

    printf("Informe um valor para o novo elemento da fila: ");
    scanf("%d", &value);

    element* newElement = (element*) malloc(sizeof(element));

    newElement->value = value;
    newElement->pointerToNext = NULL;

    return newElement;
}

bool isEmpty(descritor* desc)
{
    if ( desc->pointerToBeginQueue == NULL )
    {
        return true;
    }

    return false;
}

void enQueue(descritor* desc, element* newElement)
{
    if ( isEmpty(desc) )
    {
        desc->pointerToBeginQueue = newElement;
        desc->pointerToEndQueue   = newElement;
    }
    else
    {
        element* lastElement       = desc->pointerToEndQueue;
        lastElement->pointerToNext = newElement;
        desc->pointerToEndQueue    = newElement;
    }
}

void deQueue(descritor* desc)
{
    if ( not isEmpty(desc) )
    {
        element* helper = desc->pointerToBeginQueue;

        desc->pointerToBeginQueue = helper->pointerToNext;

        // Se o elemento era unico na fila, atualiza o final da fila tamb�m para NULL:
        if ( desc->pointerToBeginQueue == NULL )
        {
            desc->pointerToEndQueue = NULL;
        }

        helper->pointerToNext = NULL;

        printf("Valor do elemento excluído: %d \n", helper->value);
        free(helper);
    }
    else
        puts("A fila está vazia!");
}

void showQueue(descritor* desc)
{
    element* firstElement = desc->pointerToBeginQueue;

    if ( firstElement != NULL )
    {
        element* element = firstElement;

        do {
            printf(" %d ", element->value);
            element = element->pointerToNext;
        } while ( element != NULL );
    }
    else
        puts("Fila Vazia.");
}
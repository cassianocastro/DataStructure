#include "../includes/Stack.h"

struct element* createElement(int valor)
{
    struct element* novo = (struct element*) malloc(sizeof(struct element));

    novo->valor    = valor;
    novo->anterior = NULL;

    return novo;
}

struct element* push(struct element* topo, int valor)
{
    struct element* aux = topo;

    topo = createElement(valor);
    topo->anterior = aux;

    return topo;
}

bool isEmpty(struct element* topo)
{
    return topo == NULL;
}

struct element* pop(struct element* topo)
{
    if ( not isEmpty(topo) )
    {
        struct element* aux = topo;
        topo = topo->anterior;

        free(aux);
    }
    else
    {
        puts("A pilha está vazia!");
    }

    return topo;
}

void showStack(struct element* topo)
{
    bool isFirst = true;

    while ( topo != NULL )
	{
        puts("  ---");

	    if ( isFirst )
        {
            printf("  |%d| <---- Topo \n", topo->valor);
            isFirst = false;
        }
        else
        {
            printf("  |%d|\n", topo->valor);
        }

        if ( topo->anterior == NULL )
        {
            puts("  ---");
        }

        topo = topo->anterior;
    }
}
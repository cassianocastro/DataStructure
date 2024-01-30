#include "../includes/Stack.h"

element* createElement(element* topo, int valor)
{
    element* novo  = (element*) malloc(sizeof(element));

    novo->valor    = valor;
    novo->anterior = NULL;

    return novo;
}

element* push(element* topo, int valor)
{
    element* aux = topo;

    topo = createElement(topo, valor);
    topo->anterior = aux;

    return topo;
}

bool isEmpty(element* topo)
{
    return topo == NULL;
}

element* pop(element* topo)
{
    if ( not isEmpty(topo) )
    {
        element* aux = topo;
        topo = topo->anterior;

        free(aux);
    }
    else
    {
        puts("A pilha está vazia!");
    }

    return topo;
}

void showStack(element* topo)
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

void createMenu(void)
{
    printf(
        "\nOperações sobre Pilhas"
        "\nSelecione a opção desejada:"
        "\n1. Incluir | 2. Excluir | 3. Mostrar Pilha | 0. Sair"
        "\nOpção\? "
    );
}
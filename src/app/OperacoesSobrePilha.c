#include "../includes/StackOperations.h"

element* createElement(element* topo, int valor)
{
    element* novo  = malloc(sizeof(element));

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
            printf("  |%d| <---- Topo\n", topo->valor);
            isFirst = false;
        }
        else
        {
            printf("  |%d|\n", topo->valor);
        }

        if (topo->anterior == NULL)
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

/**
 *
 */
int main(void)
{
    Options option;
    int valor = 0;
    element* topo     = NULL;
    element* excluido = NULL;

    while ( true )
    {
        createMenu();
        scanf("%d", &option);
        system("clear");

        switch ( option )
        {
            case PUSH:
                printf("Informe um valor para o novo elemento da pilha: ");
                scanf("%d", &valor);

                topo = push(topo, valor);
                break;
            case POP:
                topo = pop(topo);
                break;
            case SHOWSTACK:
                ( not isEmpty(topo) ) ? showStack(topo) : puts("Pilha Vazia.");
                break;
            case EXIT:
                exit(EXIT_SUCCESS);
                break;
            default:
                puts("Opção inválida.");
        }
    }
}
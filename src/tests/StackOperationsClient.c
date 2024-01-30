#include "../includes/StackOperations.h"

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
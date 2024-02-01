#include "../includes/StackOperations.h"

unsigned int createMenu(void)
{
    unsigned int option = 0u;

    printf(
        "\nOperações sobre Pilhas"
        "\nSelecione a opção desejada:"
        "\n1. Incluir | 2. Excluir | 3. Mostrar Pilha | 0. Sair"
        "\nOpção\? "
    );
    scanf(" %u", &option);

    return option;
}

void clearConsole(void)
{
#ifdef WIN32
    system("cls");
#elif LINUX
    system("clear");
#endif
}

void addonStack(struct element** top)
{
    int value = 0;

    printf("Informe um valor para o novo elemento da pilha: ");
    scanf("%d", &value);

    *top = push(*top, value);
}

void deleteOfTheStack(struct element** top)
{
    *top = pop(*top);
}

void printStack(struct element** top)
{
    if ( not isEmpty(*top) )
        showStack(*top);
    else
        puts("Pilha Vazia.");
}

/**
 *
 */
int main(void)
{
    unsigned int option = 0u;

    struct element* topo = NULL;

    while ( true )
    {
        option = createMenu();

        clearConsole();

        switch ( option )
        {
            case PUSH:
                addonStack(&topo);
                break;
            case POP:
                deleteOfTheStack(&topo);
                break;
            case SHOWSTACK:
                printStack(&topo);
                break;
            case EXIT:
                exit(EXIT_SUCCESS);
                break;
            default:
                puts("Opção inválida.");
        }
    }

    return EXIT_SUCCESS;
}
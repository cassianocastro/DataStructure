#include "../includes/QueueOperations.h"

unsigned int createMenu(void)
{
    unsigned int option = 0u;

    printf(
        "\nOperações sobre Filas"
        "\nSelecione a opção desejada:"
        "\n1. Incluir | 2. Excluir | 3. Exibir | 0. Sair"
        "\nOpção\? "
    );
    scanf("%d", &option);

    return option;
}

/**
 *
 */
int main(void)
{
    setlocale(LC_ALL, "");

    unsigned int option = 0u;

    element* newElement = NULL;
    descritor* desc = (descritor*) malloc(sizeof(descritor));

    desc->pointerToBeginQueue = NULL;
    desc->pointerToEndQueue   = NULL;

    while ( true )
    {
        option = createMenu();

        system("clear");

        switch ( option )
        {
            case EXIT:
                exit(EXIT_SUCCESS);
                break;
            case CREATE:
                newElement = createElement();
                enQueue(desc, newElement);
                break;
            case DELETE:
                deQueue(desc);
                break;
            case SHOW:
                showQueue(desc);
                break;
            default:
                puts("Opção inválida!");
        }
    }

    return EXIT_SUCCESS;
}
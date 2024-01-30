#include "../includes/Queue.h"

void createMenu(void)
{
    printf(
        "\nOperações sobre Filas"
        "\nSelecione a opção desejada:"
        "\n1. Incluir | 2. Excluir | 3. Exibir | 0. Sair"
        "\nOpção\? "
    );
}

/**
 *
 */
int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "");

    Options option;

    element* newElement       = NULL;
    descritor* desc           = (descritor*) malloc(sizeof(descritor));
    desc->pointerToBeginQueue = NULL;
    desc->pointerToEndQueue   = NULL;

    while ( true )
	{
        createMenu();
        scanf("%d", &option);

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
}
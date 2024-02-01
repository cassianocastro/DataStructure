#include "../includes/Queue.h"

unsigned int createMenu(void)
{
    unsigned int option = 0u;

    printf(
        "\nOperações sobre Filas"
        "\nSelecione a opção desejada:"
        "\n1. Incluir | 2. Excluir | 3. Exibir | 0. Sair"
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

/**
 *
 */
int main(int argc, const char** argv)
{
    setlocale(LC_ALL, "");

    unsigned int option = 0u;

    struct element* newElement = NULL;
    descritor* desc = (descritor*) malloc(sizeof(descritor));

    desc->pointerToBeginQueue = NULL;
    desc->pointerToEndQueue   = NULL;

    while ( true )
	{
        option = createMenu();

        clearConsole();

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
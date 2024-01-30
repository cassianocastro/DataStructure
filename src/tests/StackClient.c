#include "../includes/Stack.h"

unsigned int createMenu(void)
{
    unsigned int option = 0u;

    printf(
        "\nOperações sobre Pilhas"
        "\nSelecione a opção desejada:"
        "\n1. Incluir | 2. Excluir | 3. Mostrar Pilha | 0. Sair"
        "\nOpção\? "
    );
    scanf("%d", &option);

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
    int valor = 0;
    element* topo     = NULL;
    element* excluido = NULL;

    while ( true )
	{
        option = createMenu();

        clearConsole();

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

    return EXIT_SUCCESS;
}
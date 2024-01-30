#include "../includes/QueueOperations.h"

/**
 *
 */
int main(void)
{
    setlocale(LC_ALL, "");

    Options option;

    element* newElement = NULL;
    descritor* desc = (descritor*) malloc(sizeof(descritor));

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

    return EXIT_SUCCESS;
}
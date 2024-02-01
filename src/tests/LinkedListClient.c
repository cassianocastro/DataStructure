#include "../includes/LinkedList.h"

/**
 *
 */
int main(void)
{
    setlocale(LC_ALL, "");

	No* lista = NULL;

    No* n  = createElement(35);
    No* n2 = createElement(50);
    No* n3 = createElement(30);
    No* n4 = createElement(55);
    No* n5 = createElement(3);

    puts("\nInserindo na última posição da lista os elementos 35 e 50:");

    lista = setLast(lista, n);
    lista = setLast(lista, n2);
    showList(lista);

    puts("\nInserindo 30 como primeiro elemento da lista:");

    lista = setFirst(lista, n3);
    showList(lista);

    puts("\nInserindo 55 como ultimo elemento da lista:");

    lista = setLast(lista, n4);
    showList(lista);

    puts("\nInserindo elemento 3 na posicao 3:");

    lista = setIndex(lista, n5, 3);
    showList(lista);

    puts("\nRemovendo o elemento da posição 1 da lista:");

    lista = delElement(lista, 1);
    showList(lista);

    puts("\nRemovendo o elemento da posição 2 da lista:");

    lista = delElement(lista, 2);
    showList(lista);

    puts("\nRemovendo o elemento da posição 3 da lista:");

    lista = delElement(lista, 3);
    showList(lista);

    return EXIT_SUCCESS;
}
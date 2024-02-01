#include "../includes/Deque.h"

/**
 *
 */
int main(void)
{
    setlocale(LC_ALL, "");

    // Criando referencia para a lista
    No* list = NULL;

    // Criar uma lista apontada por n com o primeiro elemento
    // No* n  = createElement(35);
    No* n2 = createElement(50);
    No* n3 = createElement(30);
    No* n4 = createElement(55);
    No* n5 = createElement(3);
    No* n6 = createElement(1);

    puts("Inserindo na última posição da lista os elementos 50, 30 e 55:");
    list = setLast(list, n2);
    list = setLast(list, n3);
    list = setLast(list, n4);
    showList(list);

    puts("\n\nInserindo 3 como primeiro elemento da lista:");
    list = setFirst(list, n5);
    showList(list);

    puts("\n\nRemovendo o elemento da posicao 4 da lista:");
    list = removeElement(list, 4);
    showList(list);

    puts("\n\nApresentando a lista em ordem inversa:");
    showReversed(list);

    puts("\n\nInserindo 1 na posicao 2 da lista:");
    list = add(list, n6, 2);
    showList(list);

    puts("\n\nApresentando a lista em ordem inversa:");
    showReversed(list);

    puts("\n\nRemovendo 30...");
    list = removeElement(list, 4);
    showList(list);

    puts("\n\nRemovendo 50...");
    list = removeElement(list, 3);
    showList(list);

    puts("\n\nRemovendo 1...");
    list = removeElement(list, 2);
    showList(list);

    puts("\n\nRemovendo 3...");
    list = removeElement(list, 1);
    showList(list);

    return EXIT_SUCCESS;
}
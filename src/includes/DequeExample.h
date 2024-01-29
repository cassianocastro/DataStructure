#ifndef DEQUE_EXAMPLE_H

#define DEQUE_EXAMPLE_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <iso646.h>
#include <locale.h>

/**
 *
 */
typedef struct No
{
    int idade;

    struct No* proximo;
    struct No* anterior;
}
No;

/**
 *
 */
No* createElement(int);

/**
 * Insert in the beginning of the list
 */
No* setFirst(No*, No*);

/**
 *
 */
No* getLastElement(No*);

/**
 *
 */
No* setLast(No*, No*);

/**
 *
 */
void showList(No*);

/**
 *
 */
void showReversed(No*);

/**
 *
 */
No* removeElement(No*, int);

/**
 *
 */
No* add(No*, No*, int);

#endif
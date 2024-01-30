#ifndef LINKED_LIST_H

#define LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iso646.h>

/**
 *
 */
typedef struct No
{
    int idade;

    struct No* prox;
}
No;

/**
 *
 */
No* createElement(int);

/**
 *
 */
No* setFirst(No*, No*);

/**
 *
 */
No* setLast(No*, No*);

/**
 *
 */
No* delElement(No*, int);

/**
 *
 */
void showList(No*);

/**
 *
 */
No* setIndex(No*, No*, int);

#endif
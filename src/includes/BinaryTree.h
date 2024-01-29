#ifndef BINARY_TREE_H

#define BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iso646.h>
#include <stdbool.h>

/**
 *
 */
typedef struct nodo
{
    char info;
    struct nodo* esquerda;
    struct nodo* direita;
}
nodo;

#endif
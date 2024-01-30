#ifndef BINARY_TREE_OPERATIONS_H

#define BINARY_TREE_OPERATIONS_H

#include <iso646.h>
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

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

/**
 *
 */
nodo* createNodo(char);

/**
 * Inclusao de um nodo na Arvore
 */
void insere_folha(nodo**, char);

/**
 * Caminhamento pre-ordem
 */
void pre_ordem(nodo*);

/**
 * Caminhamento em-ordem
 */
void em_ordem(nodo*);

/**
 * Caminhamento pos-ordem
 */
void pos_ordem(nodo*);

/**
 *
 */
void pesquisar_nodo(nodo*, char);

/**
 *
 */
void createMenu(void);

#endif
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
unsigned int createMenu(void);

#endif
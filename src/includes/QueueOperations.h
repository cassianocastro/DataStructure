#ifndef QUEUE_OPEARTIONS_H

#define QUEUE_OPEARTIONS_H

#include <iso646.h>
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
typedef enum
{
    EXIT,
    CREATE,
    DELETE,
    SHOW
}
Options;

/**
 *
 */
typedef struct
{
    int value;

    struct element* pointerToNext;
}
element;

/**
 * Definicao do descritor.
 * Ponteiros que armazezam o inicio e o final da fila
 */
typedef struct
{
    struct element* pointerToBeginQueue;
    struct element* pointerToEndQueue;
}
descritor;

/**
 *
 */
element* createElement(void);

/**
 *
 */
bool isEmpty(descritor*);

/**
 *
 */
void enQueue(descritor*, element*);

/**
 *
 */
void deQueue(descritor*);

/**
 *
 */
void showQueue(descritor*);

/**
 *
 */
unsigned int createMenu(void);

#endif
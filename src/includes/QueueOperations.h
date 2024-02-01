#ifndef QUEUE_OPERATIONS_H

#define QUEUE_OPERATIONS_H

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
struct element
{
    int value;

    struct element* pointerToNext;
};

/**
 * Definicao do descritor.
 * Ponteiros que armazenam o inicio e o final da fila
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
struct element* createElement(void);

/**
 *
 */
bool isEmpty(descritor*);

/**
 *
 */
void enQueue(descritor*, struct element*);

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
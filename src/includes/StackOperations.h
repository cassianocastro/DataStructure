#ifndef STACK_OPERATIONS_H

#define STACK_OPERATIONS_H

#include <iso646.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
typedef enum
{
    EXIT,
    PUSH,
    POP,
    SHOWSTACK
}
Options;

/**
 *
 */
typedef struct
{
    int valor;

    struct element* anterior;
}
element;

/**
 *
 */
element* createElement(element*, int);

/**
 * Add elements in the stack
 */
element* push(element*, int);

/**
 *
 */
bool isEmpty(element*);

/**
 *
 */
element* pop(element*);

/**
 *
 */
void showStack(element*);

/**
 *
 */
void createMenu(void);

#endif
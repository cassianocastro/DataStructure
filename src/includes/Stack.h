#ifndef STACK_H

#define STACK_H

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
element* createElement(int);

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
unsigned int createMenu(void);

#endif
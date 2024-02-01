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
struct element
{
    int valor;

    struct element* anterior;
};

/**
 *
 */
struct element* createElement(int);

/**
 * Add elements in the stack
 */
struct element* push(struct element*, int);

/**
 *
 */
bool isEmpty(struct element*);

/**
 *
 */
struct element* pop(struct element*);

/**
 *
 */
void showStack(struct element*);

/**
 *
 */
unsigned int createMenu(void);

#endif
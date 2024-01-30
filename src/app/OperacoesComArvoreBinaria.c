#include "../includes/BinaryTreeOperations.h"

nodo* createNodo(char info)
{
    nodo* novo = (nodo*) malloc(sizeof(nodo));

    novo->info     = info;
    novo->esquerda = NULL;
    novo->direita  = NULL;

    return novo;
}

void insere_folha(nodo** arv, char info)
{
    if ( *arv == NULL )
    {
        *arv = createNodo(info);
    }
    else
    {
        // Se a informacao e menor que a informacao da arvore, insere a esquerda
        if ( info < (*arv)->info )
        {
            puts("Inserindo à Esquerda...");
            insere_folha(&(*arv)->esquerda, info);
            // Se a informacao e maior que a informacao da arvore, insere a direita
        }
        else if ( info > (*arv)->info )
        {
            puts("Inserindo à Direita...");
            insere_folha(&(*arv)->direita, info);
        }
    }
}

void pre_ordem(nodo* arv)
{
    if ( arv != NULL )
    {
        printf("%c\n", arv->info);

        if ( arv->esquerda != NULL )
        {
            puts("Nodo Esquerdo.");
            pre_ordem(arv->esquerda);
        }

        if ( arv->direita != NULL )
        {
            puts("Nodo Direito.");
            pre_ordem(arv->direita);
        }
    }
}

void em_ordem(nodo* arv)
{
    if ( arv != NULL )
    {
        if ( arv->esquerda != NULL )
        {
            puts("Nodo Esquerdo.");
            em_ordem(arv->esquerda);
        }

        printf("%c \n", arv->info);

        if ( arv->direita != NULL )
        {
            puts("Nodo Direito.");
            em_ordem(arv->direita);
        }
    }
}

void pos_ordem(nodo* arv)
{
    if ( arv != NULL )
    {
        if ( arv->esquerda != NULL )
        {
            puts("Nodo Esquerdo.");
            pos_ordem(arv->esquerda);
        }

        if ( arv->direita != NULL )
        {
            puts("Nodo direito.");
            pos_ordem(arv->direita);
        }

        printf("%c\n", arv->info);
    }
}

void pesquisar_nodo(nodo* arv, char pesq)
{
    if ( arv != NULL )
    {
        if ( arv->info == pesq )
        {
            printf("Nodo encontrado: %c\n", arv->info);
        }
        else
        {
            if ( pesq > arv->info )
            {
                puts("Pesquisando a direita...");
                pesquisar_nodo(arv->direita, pesq);
            }
            else
            {
                puts("Pesquisando a esquerda...");
                pesquisar_nodo(arv->esquerda, pesq);
            }
        }
    }
    else
        puts("Nodo não encontrado.");
}
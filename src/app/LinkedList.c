#include "../includes/LinkedList.h"

No* createElement(int idade)
{
    No* novo = (No*) malloc(sizeof(No));

    novo->idade = idade;
    novo->prox  = NULL;

    return novo;
}

No* setFirst(No* lista, No* novo)
{
    novo->prox = lista;

    return novo;
}

No* setLast(No* lista, No* novo)
{
    if ( lista != NULL )
    {
        No* aux = lista;

		while ( aux->prox != NULL )
		{
            aux = aux->prox;
        }

        aux->prox = novo;

        return lista;
    }

    return novo;
}

No* delElement(No* lista, int posicao)
{
    No* aux    = lista;
    No* remove = NULL;
    int cont   = 1;

    if ( lista == NULL )
    {
        return NULL;
    }

    while ( aux->prox != NULL and cont < (posicao - 1) )
	{
        aux = aux->prox;
        cont++;
    }

    // Se eh a segunda posicao entao so deve atualizar o cont
    if ( posicao == 2 ) cont++;
	/*
		Testa se a remoção é o primeiro da lista.
		Neste caso, existem duas possibilidades: (a) ter mais de um na lista.
		Quando for mais de um, atualizar a lista para o novo primeiro ou
		(b) ser o unico na lista
	*/
    if ( cont == 1 )
    {
        if ( aux->prox != NULL )
            lista = aux->prox; // atualiza o inicio.
        else
            lista = NULL;      // caso só exista na lista o proprio a ser removido

        free(aux);
    }
    else
    {
        remove = aux->prox;
        aux->prox = remove->prox;

        free(remove);
    }

    return lista;
}

void showList(No* lista)
{
    while ( lista != NULL )
	{
        printf("%.2d | ", lista->idade);
        lista = lista->prox;
    }

    printf("\n");
}

No* setIndex(No* lista, No* novo, int posicao)
{
    No* aux  = lista;
    int cont = 1;

    if ( lista == NULL )
    {
        return novo;
    }

    while ( aux->prox != NULL and cont < (posicao - 1) )
	{
        aux = aux->prox;
        cont++;
    }

    novo->prox = aux->prox;
    aux->prox  = novo;

    if ( posicao == 1 )
    {
        return novo;
    }

    return lista;
}
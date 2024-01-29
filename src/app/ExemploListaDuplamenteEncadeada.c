#include "../includes/DequeExample.h"

No* createElement(int age)
{
    No* newElement = (No*) malloc(sizeof(No));

    newElement->idade    = age;
    newElement->proximo  = NULL;
    newElement->anterior = NULL;

    printf("Novo elemento: %d\n", newElement->idade);

    return newElement;
}

No* setFirst(No* list, No* novo)
{
    if ( list != NULL )
    {
        list->anterior = novo;
        novo->proximo  = list;
    }

    return novo;
}

No* getLastElement(No* list)
{
    while ( list->proximo != NULL )
    {
        list = list->proximo;
    }

    return list;
}

No* setLast(No* list, No* novo)
{
    if ( list != NULL )
    {
        No* last = getLastElement(list);
        last->proximo  = novo;
        novo->anterior = last;

        return list;
    }

    return novo;
}

void showList(No* list)
{
    if ( list != NULL )
    {
        for ( int i = 0; list != NULL; i++ )
        {
            printf("\nIdade do elemento %d: %d", i, list->idade);

            list = list->proximo;
        }
    }
    else
        puts("Lista vazia.");
}

void showReversed(No* lista)
{
    No* ultimo = getLastElement(lista);

    for ( int i = 0; ultimo != NULL; i++ )
    {
        printf("\nIdade do elemento %d: %d", i, ultimo->idade);

        ultimo = ultimo->anterior;
    }
}

No* removeElement(No* lista, int posicao)
{
    if ( lista != NULL )
    {
        No* auxiliar = lista;
        //exclusao lista
        if ( posicao == 1 )
        {
            lista = lista->proximo;
            //Se nao for o ultimo elemento da lista
            if ( lista != NULL )
            {
                lista->anterior = NULL;
            }
        }
        else
        {
            for ( int i = 1; auxiliar != NULL && i < posicao; i++ )
            {
                auxiliar = auxiliar->proximo;
            }

            if ( auxiliar == NULL )
            {
                printf("A lista nao tem %d elementos \n", posicao);

                return lista;
            }

            auxiliar
                ->anterior
                ->proximo = auxiliar->proximo;

            //exclusão do último não necessita atualizar a referencia de um elemento posterior
            if ( auxiliar->proximo != NULL )
            {
                auxiliar
                    ->proximo
                    ->anterior = auxiliar->anterior;
            }
        }
        free( auxiliar );
    }
    else
        puts("A lista está vazia!");

    return lista;
}

No* add(No* list, No* novo, int posicao)
{
    No* auxiliar = list;

    //Inclusão no inicio
    if ( list == NULL || posicao == 1 )
    {
        list = setFirst(list, novo);
    }
    else
    {
        for ( int i = 1; auxiliar->proximo != NULL && i < posicao; i++ )
        {
            auxiliar = auxiliar->proximo;
        }

        if ( auxiliar->proximo != NULL )
        {
            //inclusão em outro ponto
            auxiliar
                ->anterior
                ->proximo  = novo;
            novo->proximo  = auxiliar;
            novo->anterior = auxiliar->anterior;
            auxiliar->anterior = novo;
        }
        else
            //Inclusão no último
            setLast(list, novo);
    }

    return list;
}
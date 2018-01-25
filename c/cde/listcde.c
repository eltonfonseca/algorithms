#include <stdio.h>
#include <stdlib.h>
#include "listcde.h"

void createListCDE(listCDE *l)
{
    l->start = NULL;
    l->end = NULL;
}

int isEmpty(listCDE l)
{
    if(l.start == NULL)
        return TRUE;
    return FALSE;
}

int insertListCDE(listCDE *l, int data)
{
    struct node *aux;
    aux = (struct node*) malloc(sizeof(struct node));
    aux->data = data;
    if(l->start == NULL)
    {
        l->start = aux;
        l->end = aux;
        aux->before = l->end;
        aux->next = l->start;
        return TRUE;
    }
    else
    {
        aux->before = l->end;
        aux->next = l->start;
        l->end->next = aux;
        l->end = aux;
        l->start->before = aux;
        return TRUE;
    }
}

int removeListCDE(listCDE *l, int data)
{
    struct node *aux, *previous, *current;
    if(l->start->data == data)
    {
        if(l->start == l->end)
        {
            l->start = NULL;
            l->end = NULL;
        }
        else
        {
            aux = l->start;
            l->start = l->start->next;
            l->start->before = l->end;
            l->end->next = l->start;
        }
        free(aux);
        return TRUE;
    }
    else
    {
        previous = l->start;
        current = l->start->next;
        while(current != l->start && current->data != data)
        {
            previous = current;
            current = current->next;
        }
        if(current != l->start)
        {
            aux = current;
            previous->next = current->next;
            current->next->before = previous;
            if(current->next == l->start)
                l->end = previous;
            free(aux);
            return TRUE;
        }
    }
    return FALSE;
}

void showListCDE(listCDE l)
{
    struct node *aux;
    if(!isEmpty(l))
    {
        aux = l.start;
        if(aux != l.end)
        {
            do
            {
                printf("%d->%d ", aux->data, aux->next->data);
                aux = aux->next;
            } while(aux != l.start);
        }
        else
        {
            printf("%d-> Proprio", aux->data);
        }
    }
}

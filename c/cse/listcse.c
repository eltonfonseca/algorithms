/*
*
* Author: Elton Fonseca
*
*/

#include <stdio.h>
#include <stdlib.h>
#include "listcse.h"

void createListCSE(listCSE *l)
{
    l->start = NULL;
    l->end = NULL;
}
int insertListCSE(listCSE *l, int data)
{
    struct node *aux;
    aux = (struct node*) malloc(sizeof(struct node));
    if(aux == NULL)
        return FALSE;
    if(l->start == NULL)
    {
        aux->data = data;
        l->start = aux;
        l->end = aux;
        aux->next = l->start;
        return TRUE;
    }
    aux->data = data;
    l->end->next = aux;
    aux->next = l->start;
    l->end = aux;
    return TRUE;
}

int removeListCSE(listCSE *l, int data)
{
    struct node *aux, *current, *previous;
    if(l->start->data == data)
    {
        aux = l->start;
        if(l->start == l->end)
        {
            l->start = NULL;
            l->end = NULL;
        }
        else
        {
            l->start = l->start->next;
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
            if(l->end == current)
                l->end = previous;
            free(aux);
            return TRUE;
        }
    }
    return FALSE;
}

int isEmpty(listCSE l)
{
    if(l.start == NULL)
        return TRUE;
    return FALSE;
}

void showListCSE(listCSE l)
{
    struct node *aux;
    if (!isEmpty(l))
    {
        aux = l.start;
        if (aux != l.end)
        {
            do
            {
                printf("%d->%d ", aux->data, aux->next->data);
                aux = aux->next;
            }
            while (aux != l.start);
        }
        else
            printf("%d-> PROPRIO ", aux->data);
    }
}

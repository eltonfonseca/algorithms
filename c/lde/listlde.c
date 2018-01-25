/*
* Author: Elton Fonseca
*/

#include <stdio.h>
#include <stdlib.h>
#include "listlde.h"

void create(list *l)
{
    l->start = NULL;
    l->end = NULL;
}
int insert(list *l, int data)
{
    struct node *aux;
    aux = (struct node*) malloc(sizeof(struct node));
    if(aux == NULL)
        return FALSE;
    aux->data = data;
    if(l->start == NULL)
    {
        aux->next = NULL;
        aux->previous = NULL;
        l->start = aux;
        l->end = aux;
        return TRUE;
    }
    aux->next = NULL;
    aux->previous = l->end;
    l->end->next = aux;
    l->end = aux;
    return TRUE;
}
int removee(list *l, int data)
{
    struct node *aux, *before, *current;
    if(l->start->data == data)
    {
        aux = l->start;
        if(l->start->next == NULL)
        {
            l->start = NULL;
            l->end = NULL;
        }
        else
        {
            l->start = aux->next;
            l->start->previous = aux->previous;
        }
        free(aux);
        return TRUE;
    }
    else
    {
        before = l->start;
        current = l->start->next;
        while(current != NULL && current->data != data)
        {
            before = current;
            current = current->next;
        }
        if(current != NULL)
        {
            aux = current;
            before->next = current->next;
            if(current->next != NULL)
            {
                current->next->previous = current->previous;
            }
            else
            {
                l->end = before;
            }
            free(aux);
            return TRUE;
        }
    }
    return FALSE;
}
int isEmpty(list l)
{
    if(l.start == NULL)
        return TRUE;
    return FALSE;
}
void showList(list l, char mode)
{
    struct node *aux;
    if(!isEmpty(l))
    {
        if(mode == 's')
        {
            aux = l.start;
            while(aux != NULL)
            {
                printf("\n%d", aux->data);
                aux = aux->next;
            }
        }
        else
        {
            aux = l.end;
            while(aux != NULL)
            {
                printf("\n%d", aux->data);
                aux = aux->previous;
            }
        }
    }
}

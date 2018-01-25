#include <stdio.h>
#include <stdlib.h>
#include "listldeo.h"

void create(list *l)
{
    l->start = NULL;
    l->end = NULL;
}

int insert(list *l, int data)
{
    struct node *aux, *before, *current;
    aux = (struct node*) malloc(sizeof(struct node));
    if(aux == NULL)
        return FALSE;
    aux->data = data;
    if(l->start == NULL)
    {
        l->start = aux;
        l->end = aux;
        aux->next = NULL;
        aux->previous = NULL;
        return TRUE;
    }
    else
    {
        before = NULL;
        current = l->start;
        while(current != NULL && data > current->data)
        {
            before = current;
            current = current->next;
        }
        if(before == NULL)
        {
            aux->previous = NULL;
            aux->next = current;
            current->previous = aux;
            l->start = aux;
            return TRUE;
        }
        if(current == NULL)
        {
            aux->previous = before;
            aux->next = current;
            before->next = aux;
            l->end = aux;
            return TRUE;
        }
        aux->previous = before;
        aux->next = current;
        before->next = aux;
        current->previous = aux;
        return TRUE;
    }
}

int removee(list *l, int data)
{
    struct node *aux, *before, *current;
    if(l->start == NULL)
        return FALSE;
    before = NULL;
    current = l->start;
    if(current->data == data)
    {
        aux = current;
        current = current->next;
        if(current == NULL)
        {
            l->start = NULL;
            l->end = NULL;
        }
        else
        {
            current->previous = NULL;
            l->start = current;
        }
        free(aux);
        return TRUE;
    }
    while(current != NULL && data != current->data)
    {
        before = current;
        current = current->next;
    }
    aux = current;
    before->next = current->next;
    if(before->next == NULL)
    {
        l->end = before;
        free(aux);
        return TRUE;
    }
    else
    {
        current->next->previous = before;
        free(aux);
        return TRUE;
    }
}
int isEmpty(list l)
{
    if(l.start == NULL)
        return TRUE;
    return FALSE;
}
void showList(list l, char mode)
{
    if(mode == 's')
    {
        while(l.start != NULL)
        {
            printf("\n%d", l.start->data);
            l.start = l.start->next;
        }
    }
    else
    {
        while(l.end != NULL)
        {
            printf("\n%d", l.end->data);
            l.end = l.end->previous;
        }
    }
}

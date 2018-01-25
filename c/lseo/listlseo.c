#include <stdio.h>
#include <stdlib.h>
#include "listlseo.h"

void create(list *l)
{
    l->start = NULL;
    l->end = NULL;
}
int insert(list *l, int data)
{
    struct node *aux, *previous, *current;

    aux = (struct node *) malloc(sizeof(struct node));
    if(aux != NULL)
    {
        aux->data = data;
        aux->next = NULL;
        previous = NULL;
        current = l->start;
        while(current != NULL && data > current->data)
        {
            previous = current;
            current = current->next;
        }
        if(previous == NULL)
        {
            aux->next = l->start;
            l->start = aux;
            return TRUE;
        }
        else
        {
            previous->next = aux;
            aux->next = current;
            return TRUE;
        }
    }
    else
    {
        return FALSE;
    }
}
int removee(list *l, int data)
{
    struct node *aux, *previous, *current;
    aux = l->start;
    if(aux != NULL && data == aux->data)
    {
        l->start = aux->next;
        free(aux);
        return TRUE;
    }
    else
    {
        previous = l->start;
        current = l->start->next;
        while(current != NULL && current->data != data)
        {
            previous = current;
            current = current->next;
        }
        if(current != NULL)
        {
            aux = current;
            previous->next = aux->next;
            free(aux);
            l->end = current;
        }
        else
            return FALSE;
    }
}
void showList(list l)
{
    while(l.start != NULL)
    {
        printf("\n%d", l.start->data);
        l.start = l.start->next;
    }
}

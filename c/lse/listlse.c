#include <stdio.h>
#include <stdlib.h>
#include "listlse.h"

void create(list *l)
{
    l->start = NULL;
    l->end = NULL;
}

int insert(list *l, int data)
{
    struct node *aux;
    aux = (struct node *) malloc(sizeof(struct node));
    if(aux == NULL)
        return FALSE;
    aux->data = data;
    aux->next = NULL;
    if(l->start == NULL)
        l->start = aux;
    if(l->end != NULL)
        l->end->next = aux;
    l->end = aux;
    return TRUE;
}
int removee(list *l, int data)
{
    struct node *aux, *previous, *current;
    if(l->start->data == data)
    {
        aux = l->start;
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
            previous->next = current->next;
            free(aux);
            l->end = current;
            return TRUE;
        }
        else
            return FALSE;
    }
}
int isEmpty(list l)
{
    if(l.start == NULL)
        return TRUE;
    return FALSE;
}
void showList(list l)
{
    printf("\n\n");
    while(l.start != NULL)
    {
        printf("%d ", l.start->data);
        l.start = l.start->next;
    }
}

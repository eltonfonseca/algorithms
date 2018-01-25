#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void create(queue *q)
{
    q->start = NULL;
    q->end = NULL;
}
int insert(queue *q, int data)
{
    struct node *aux;
    aux = (struct node*) malloc(sizeof(struct node));
    if(aux == NULL)
        return FALSE;
    aux->data = data;
    aux->next = NULL;
    if(q->start == NULL)
        q->start = aux;
    if(q->end != NULL)
        q->end->next = aux;
    q->end = aux;
    return TRUE;
}
int removee(queue *q, int *data)
{
    struct node *aux;
    if(q->start == NULL)
        return FALSE;
    aux = q->start;
    q->start = aux->next;
    if(q->start == NULL)
        q->end = NULL;
    *data = aux->data;
    free(aux);
    return TRUE;
}
int isEmpty(queue q)
{
    if(q.start == NULL)
        return TRUE;
    return FALSE;
}
void showQueue(queue q)
{
    while(!isEmpty(q))
    {
        printf("%d\n", q.start->data);
        q.start = q.start->next;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void create(stack *s)
{
    s->top = NULL;
}
int push(stack *s, int data)
{
    struct node *aux;
    aux = (struct node *) malloc(sizeof(struct node));
    if(aux == NULL)
        return FALSE;
    aux->data = data;
    aux->next = s->top;
    s->top = aux;
    return TRUE;
}
int pop(stack *s, int *data)
{
    struct node *aux;
    if(s->top == NULL)
        return FALSE;
    aux = s->top;
    *data = aux->data;
    s->top = aux->next;
    free(aux);
    return TRUE;
}
int isEmpty(stack s)
{
    if(s.top == NULL)
        return TRUE;
    return FALSE;
}
void showStack(stack s)
{
    while(!isEmpty(s))
    {
        printf("%d\n", s.top->data);
        s.top = s.top->next;
    }
}


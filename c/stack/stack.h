#ifndef __STACK__H__
#define __STACK__H__

/*---------------------------------------*
*           Stack Implementation         *
*                                        *
* Autor: Elton Fonseca                   *
* Facebook: fb.com/elton.junior6         *
*                                        *
* Computer Science - PUC Minas           *
******************************************/

#define TRUE 1
#define FALSE 0

struct node
{
    int data;
    struct node *next;
};

typedef struct
{
    struct node *top;
} stack;

void create(stack *s);
int push(stack *s, int data);
int pop(stack *s, int *data);
int isEmpty(stack s);
void showStack(stack s);

#endif /* __STACK__H__ */

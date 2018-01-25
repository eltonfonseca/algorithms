#ifndef __QUEUE__H__
#define __QUEUE__H__

/*---------------------------------------*
*           Queue Implementation         *
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
    struct node *start;
    struct node *end;
} queue;

void create(queue *q);
int insert(queue *q, int data);
int removee(queue *q, int *data);
int isEmpty(queue q);
void showQueue(queue q);

#endif /* __QUEUE__H__ */


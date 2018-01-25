#ifndef __LISTLSE__H__
#define __LISTLSE__H__

/*----------------------------------------------------*
*           Singly Linked List Implementation         *
*                                                     *
* Autor: Elton Fonseca                                *
* Facebook: fb.com/elton.junior6                      *
*                                                     *
* Computer Science - PUC Minas                        *
*******************************************************/

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
} list;

void create(list *l);
int insert(list *l, int data);
int removee(list *l, int data);
int isEmpty(list l);
void showList(list l);

#endif /* __LISTLSE__H__ */


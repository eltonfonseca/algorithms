#ifndef __LISTLDEO__H__
#define __LISTLDEO__H__

/*******************************************************
*         Doubly Linked List With Ordenation           *
*                                                      *
*  Autor: Elton Fonseca                                *
*  https://fb.com/elton.junior6                        *
*                                                      *
*  Computer Science - PUC Minas                        *
********************************************************/

#define TRUE 1
#define FALSE 0

struct node
{
    int data;
    struct node *previous;
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
void showList(list l, char mode);

#endif /* __LISTLDEO__H__ */


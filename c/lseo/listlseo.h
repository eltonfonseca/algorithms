#ifndef __LISTLSEO__H__
#define __LISTLSEO__H__

/*************************************************
*       Singly Linked List with Ordenation       *
*                                                *
*  Autor: Elton Fonseca                          *
*  https://fb.com/elton.junior6                  *
*                                                *
*  Computer Science - PUC Minas                  *
**************************************************/

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

#endif /* __LISTLSEO__H__ */


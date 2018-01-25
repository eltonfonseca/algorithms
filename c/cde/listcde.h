#ifndef __LISTCDE__H__
#define __LISTCDE__H__

/*---------------------------------------*
*   Circle List Doubly Implementation    *
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
    struct node *before;
    struct node *next;
};

typedef struct
{
    struct node *start;
    struct node *end;
} listCDE;

void createListCDE(listCDE *l);
int isEmpty(listCDE l);
int insertListCDE(listCDE *l, int data);
int removeListCDE(listCDE *l, int data);
void showListCDE(listCDE l);

#endif /* __LISTCDE__H__ */


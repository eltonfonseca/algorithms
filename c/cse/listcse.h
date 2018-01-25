#ifndef __LISTCSE__H__
#define __LISTCSE__H__

/*---------------------------------------*
*   Circle List Singly Implementation    *
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
} listCSE;

void createListCSE(listCSE *l);
int insertListCSE(listCSE *l, int data);
int removeListCSE(listCSE *l, int data);
void showListCSE(listCSE l);
int isEmpty(listCSE l);

#endif /* __LISTCSE__H__ */


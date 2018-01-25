#ifndef __STACK__H__
#define __STACK__H__

/*************************************
*        Tree Implementation         *
*                                    *
*   Autor: Elton Fonseca             *
*   Computer Science - PUC Minas     *
**************************************/

#define TRUE 1
#define FALSE 0

struct node
{
    struct node *left;
    struct node *right;
    int data;
};

typedef struct node *tree;

void create(tree *t);
void insertNode(tree *t, int data);
void inOrder(tree t);
void posOrder(tree t);
void preOrder(tree t);
int countNode(tree t);
int findNode(tree t, int data);
int bigNode(int a, int b);
int height(tree t);
int heightNode(tree t, int dado);

#endif /* __TREE__H__ */


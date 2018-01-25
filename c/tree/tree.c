#include <stdio.h>
#include <stdlib.h>
#include "tree.h" 

void create(tree *t)
{
    *t = NULL;
}

void insertNode(tree *t, int data)
{
    if(*t == NULL)
    {
        *t = (struct node *) malloc(sizeof(struct node));
        if(*t != NULL)
        {
            (*t)->left = NULL;
            (*t)->right = NULL;
            (*t)->data = data;
        }
        else
        {
            printf("\nError: Insuficient Memory!\n");
        }
    }
    else
    {
        if(data < (*t)->data)
            insertNode(&(*t)->left, data);
        else if(data > (*t)->data)
            insertNode(&(*t)->right, data);
        else
        {
            printf("\nError: Node Duplicated!\n");
        }
    }
}
void inOrder(tree t)
{
    if(t != NULL)
    {
        inOrder(t->left);
        printf("%d ", t->data);
        inOrder(t->right);
    }
}
void posOrder(tree t)
{
    if(t != NULL)
    {
        posOrder(t->left);
        posOrder(t->right);
        printf("%d ", t->data);
    }
}

void preOrder(tree t)
{
    if(t != NULL)
    {
        printf("%d ", t->data);
        preOrder(t->left);
        preOrder(t->right);
    }
}

int countNode(tree t)
{
    if(t == NULL)
        return 0;
    return countNode(t->left) + countNode(t->right) + 1;
}

int findNode(tree t, int data)
{
    if(t == NULL)
        return FALSE;
    if(t->data == data)
        return TRUE;
    return findNode(t->left, data) || findNode(t->right, data);
}

int bigNode(int a, int b)
{
    if(a > b)
        return a;
    return b;
}
int height(tree t)
{
    if(t == NULL)
        return -1;
    return 1 + bigNode(height(t->left), height(t->right));
}
int heightNode(tree t, int data)
{
    if(t->data == data)
        return 0;
    if(findNode(t->left, data))
        return 1 + heightNode(t->left, data);
    if(findNode(t->right, data))
        return 1 + heightNode(t->right, data);
    else
        return -1;
}

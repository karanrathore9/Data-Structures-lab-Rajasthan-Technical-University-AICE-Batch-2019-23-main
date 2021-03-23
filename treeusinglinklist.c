#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
    int data;
    tree *left,*right;
}  tree;
tree *root=NULL;
tree* createnode(int a)
{
    tree *t;
    t=malloc(sizeof(tree));
    t->data=a;
    t->left=NULL;
    t->right=NULL;
    return t;
}
void insert(tree* a,int x)
{
    if (a==NULL)
    {
    a=createnode(x);
    }
    else
    {
        tree *newnode;
        newnode=createnode(x);
        if (a->data>=x)
        a->left=newnode;
        else
        {
            a->right=newnode;
        }
    }    
}

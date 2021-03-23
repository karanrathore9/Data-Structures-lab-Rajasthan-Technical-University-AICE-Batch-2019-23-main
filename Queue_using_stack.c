#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int c;
    int top;
    int *array;
};
struct stack* createstack(int n)
{
    struct stack *new;
    new= malloc(sizeof(struct stack));
    new->c=n;
    new->top=-1;
    new->array=malloc(sizeof(int)*new->c);
    return new;
}
int isempty(struct stack* s)
{
    if (s->top==-1)
        return 1;
    else
        return 0;    
}
int isfull(struct stack* s)
{   
    if (s->top>=s->c)
        return 1;
    else
        return 0;    
}
void push(struct stack * s,int a)
{   
        if (!isfull(s))
       { 
        s->top++;
        s->array[s->top]=a;
       }
}
int pop(struct stack *s)
{ s->top--;
        return s->array[s->top+1];
       
}
void enqueue(struct stack *a,struct stack *b,int x)
{   int i,k;
    push(a,x);
    for (i=a->top;i>=0;i--)
    {
        k=pop(a);
        push(b,k);
    }

}
void dequeue(struct stack *a,struct stack *b)
{   

        pop(b);

}
void display(struct stack *a,struct stack *b)
{   int i;
    for(i=b->top;i>=0;i--)
    {
        printf("%d ",b->array[i]);
    }
    printf("\n");
}
void main()
{
    int size;
    printf("enter size of queue: ");
    scanf("%d",&size);
    struct  stack *A,*B;
    A=createstack(size);
    B=createstack(size);
    enqueue(A,B,1);
    enqueue(A,B,2);
    enqueue(A,B,3);
    display(A,B);
    dequeue(A,B);
    display(A,B);

}

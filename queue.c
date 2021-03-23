#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int size;
	int f;
	int r;
	int *arr;
};
int isFull(struct queue *q)
{
	if(q->r==q->size-1)
	 return -1;
	else
	 return 0; 
}
void enqueue(struct queue *q,int v)
{
	if(isFull(q)==-1)
	 printf("Queue is Full..!!!");
	else if(isFull(q)==0)
	{
		q->r=q->r+1;
		q->arr[q->r]=v;
		printf("Value %d added/enqueued successfully\n",v);
	}
}
int main()
{
	struct queue q;
	int v;
	q.size=5;
	q.f=q.r=-1;
	q.arr=(int *)malloc(sizeof(q.size*sizeof(int)));
	//enqueue
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);
	enqueue(&q,60);
	enqueue(&q,70);
}

#include<stdio.h>
#include<stdlib.h>
struct cqueue
{
	int size;
	int f;
	int r;
	int *arr;
};
int isFull(struct cqueue *q)
{
	if((q->r+1)%(q->size)==q->f)
	 return 1;
	else
	 return 0; 
}
void enqueue(struct cqueue *q,int v)
{
	if(isFull(q))
	 printf("Queue is Full..!!!");
	else
	{
		q->r=(q->r+1)%(q->size);
		q->arr[q->r]=v;
		printf("Value %d added/enqueued successfully",v);
	}
}
int main()
{
	struct cqueue q;
	int v,ch;
	q.size=5;
	q.f=q.r=0;
	q.arr=(int *)malloc(sizeof(q.size*sizeof(int)));	
		printf("\n----------------------------------------------------------------");
		printf("\n\t1.Enqueue");
		printf("\n\t2.Dequeue");
		printf("\n\t3.Exit");while(1)
	{
		
		printf("\n----------------------------------------------------------------");
		printf("\nEnter your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data : ");
				scanf("%d",&v);
				enqueue(&q,v);
				break;
			case 2:
				break;
			case 3:
				exit(0);
				break;
			default:
				break;					
		}
	}
return 0;	
}
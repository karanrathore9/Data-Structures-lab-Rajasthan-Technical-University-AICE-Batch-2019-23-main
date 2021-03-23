#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int info;
	struct node *next;
	
};
struct node *LAST=NULL;
struct node *createnode()
{
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));
	return (n);
}
struct node *insertnodeatfirst(struct node *LAST)
{
	struct node* newnode;
	newnode=createnode();
	if (LAST==NULL)
	{
	cout<<"Enter value inside node : ";
	cin>>newnode->info;
	LAST=newnode;
	newnode->next=LAST;	
	}
	else
	{
	cout<<"Enter value inside node : ";
	cin>>newnode->info;
	newnode->next=LAST->next;
	LAST->next=newnode;
	}
	return(LAST);
}
struct node *insertnodeatlast(struct node *LAST);
void display(struct node *LAST)
{
	struct node *t;
	if (LAST==NULL)
	cout<<"List is empty";
	else
	{
		
	t=LAST->next;
	do
	{
		cout<<" "<<t->info;
		t=t->next;
	}
	while(t!=LAST->next);
	}
}
int menu()
{
	int ch;
	printf("\n*****************************************************************************************\n\n");
	printf("\n\t\t\t 1. INSERT NODE AT First IN LINK LIST\n");
	printf("\t\t\t 2. VIEW LIST IN LINK LIST\n");
	printf("\t\t\t 9. EXIT\n");
	printf("\n ENTER THE CHOICE \n");
	scanf("%d",&ch);
	return (ch);		
}
int main()
{
	struct node *last=LAST;
	while(1)
  {
	switch(menu())
	{
		case 1:
			last=insertnodeatfirst(last);
			break;
		case 2:
			display(last);
			break;
		case 3:
			exit(0);	
			break;
		default:
		 printf("Chal Nikal Yahan se!!");	
	}
  }
return 0;

}

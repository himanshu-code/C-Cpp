#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*ptr;
	
};
struct node *front,*rear,*temp,*front1;
void create()
{
	front=rear=NULL;
}
void enqueue(int data)
{
	if(rear==NULL)
{
		rear=(struct node *)malloc(sizeof(struct node));
	rear->ptr=NULL;
	rear->info=data;
	front=rear;
}
else
{ temp=(struct node *)malloc(sizeof(struct node));

temp->info=data;
temp->ptr=NULL;
rear->ptr=temp;
rear=temp;
}
}
void display()
{
	
	front1=front;
	if(front==NULL && rear==NULL)
	{
		printf("Queue empty\n");
		return;
	}
	
	while(front1!=rear)
	{ printf("%d ",front1->info);
	front1=front1->ptr;
	}
	 printf("%d",front1->info);
		
	
}

void deleete()
{
	
	front1=front;
	if(front1==NULL)
	{
		printf("Empty");
	}
	else
	{
		front=front->ptr;
		printf("\n%d is dequed\n",front1->info);
		free(front1);
		
	}
}
int main()
{
	int n,a,i;
	scanf("%d",&n);
	create();
	for(i=0;i<n;i++)
	{ scanf("%d",&a);
	enqueue(a);
		
	}
	display();
	
	deleete();
	display();
	return 0;	
	
	
	
	
}

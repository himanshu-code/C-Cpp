#include<stdio.h>
#include<stdlib.h>
struct node
{ int info ;
struct node *ptr;

};
struct node *top=NULL,*top1=NULL,*temp=NULL;
void push(int data)
{
 temp=(struct node*)malloc(sizeof(struct node));
 temp->ptr=NULL;
 temp->info=data;
	if(top==NULL)
 { 
   top=temp;
 }
else
{

  temp->ptr=top;
  top=temp;
  
}
}
void display()
{ printf("\n ");
	top1=top;
	if(top1==NULL)
	{ printf("empty");
	return;
	}
	while(top1!=NULL)
	{
		printf(" %d",top1->info);
		top1=top1->ptr;
		
	}
	
}
void pop()
{
	top1=top;
	if(top1==NULL)
	{ printf("empty");
	return;
	}
	else
	{
		top=top->ptr;
		printf("popped value %d\n",top1->info);
		free(top1);
		
	}
}
int main()
{ int n,i,a;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a);
push(a);
	
}
	
	display();
	pop();
	display();
	return 0;
	
	
	
	
	
}

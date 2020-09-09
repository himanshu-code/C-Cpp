#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *create(int n)
{
	int i=0;
	node *head=NULL;
	node *temp=NULL;
	node *p=NULL;
	for(i=0;i<n;i++)
	{ 
	temp=(node*)malloc(sizeof(node));
	scanf("%d",&temp->data);
	temp->next=NULL;
		if(head==NULL)
		{head=temp;
		}
        else
      {  p=head;
      while(p->next!=NULL)
      p=p->next;
      p->next=temp;
      }
	}
    return head;
 } 
 void display(node  *head)
 {
 	node *p=NULL;
 		if(head==NULL)
		 {
		 printf("error ");
	}
		 else{
		 	p=head;
		 	while(p!=NULL)
		 	{
		 		printf("->%d",p->data);
		 		p=p->next;
			 }
		 }
 }
 int main()
 {
 	int n=0;
 	node *head=NULL;
	 scanf("%d",&n);
 	head=create(n);
 	display(head);
 	return 0;
 }

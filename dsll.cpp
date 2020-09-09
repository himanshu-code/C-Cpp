#include<stdio.h>
#include<stdlib.h>
typedef struct node
{ int data;
struct node *next;

} node;
node *head=NULL;
node *create(int n)
{ int i=0;
//node *head=NULL;
node *temp=NULL,*p;
for(i=0;i<n;i++)
{
	temp=(node*)malloc(sizeof(node));
	printf("Enter the value");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{ p=head;
	while(p->next!=NULL)
	p=p->next;
	p->next=temp;
	}
}
return head;
}
void display(node *head)
{
	node*p=NULL;
	if(head==NULL)
	printf("Empty");
	else
	{
		p=head;
		while(p!=NULL)
		{
			printf("->%d",p->data);
			p=p->next;
		}
	}
}
void search(node *head,int x)
{
	node *current=head;
	int flag=0,count=0;
	while(current!=NULL)
	{
		if(current->data==x)
		{ flag++;
		
         break;		
		}
		current=current->next;
		count++;
	}
	if(flag>0)
	{ printf("Element found at %d",count);
	}
}
node *insert(node* head)
{
	int val;
	node *last=NULL,*newnode=NULL,*temp=NULL;
	printf("\nEnter value of the node");
	//scanf("%d",&val);
	newnode=create(1);
		if(head==last&&head==NULL)
	{ head=last=newnode;
	head->next=NULL;
	last->next==NULL;
	}
	else
	{ temp=head;
	head=newnode;
	head->next=temp;
	}

}
void insertmid(int val,int pos)
{
	int i;
	node *p=NULL,*ptr=NULL,*newnode=NULL,*prev=NULL;
    newnode=(struct node*)malloc(sizeof(node));
    newnode->next=NULL;
    newnode->data=val;
	ptr=head;
	for(i=0;i<pos;i++)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	prev->next=newnode;
	newnode->next=ptr;

	
	display(head);
	
//	return head;
}
int main()
{
	int n,x;
//	node *head=NULL;
int val,pos;
	printf("enter no of elements");
	scanf("%d",&n);
	head=create(n);
	display(head);
//	printf("\nEnter element to be searched");
    scanf("%d",&x);
	search(head,x);
	
		printf("enter value to insert");
	scanf("%d",&val);
	scanf("%d",&pos);
	
	
//	head=insert(head);
	insertmid(val,pos);

	return 0;
	
	
}

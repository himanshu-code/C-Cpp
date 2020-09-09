#include<stdio.h>
#define capacity 10
int queue[capacity];
int front=0;
int rear=0;
void push(int x)
{
	queue[rear]=x;
	rear++;
}
void dequeue()
{ if(front==rear)
{
	printf("Underflow");
}
else
front++;
}
void display()
{
	int i;
	if(rear==0)
	{ printf("Underflow");
	}
else{

for(i=front;i<rear;i++)
{
	printf("%d->",queue[i]);
}
i=front;
printf("%d->\n",queue[i]);
}
}
int main()
{ int n,x;
scanf("%d",&n);
while(n!=0)
{
	switch(n)
{
		case 1: scanf("%d",&x);
		push(x);
	break;
	case 2: dequeue();
	break;
	case 3:display();
	break;
	}
scanf("%d",&n);
}
return 0;


}

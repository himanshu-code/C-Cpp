#include<stdio.h>
# define max 10
int stack[max];
int top=-1;
void push()
{
	if(top>max-1)
	{ printf("overflow");
	}
	else
	{ int x;
		scanf("%d",&x);
		top++;
		stack[top]=x;
		
	}
}
void pop()
{ 
	if(top<-1)
	{ printf("Underflow");
	
	}
	else
	{ printf("pop %d",stack[top]);
	top--;
		}
}
void display()
{ int i=top;
	while(i>=0)
	{ printf("%d ",stack[i]);
	 i--;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ push();
	} display();
	pop();
	pop();
	display();
	
}

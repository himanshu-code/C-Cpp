#include<iostream>
#include<conio.h>
using namespace std;
void main()
{ clrscr();
int a,b,c,n;
cout<<"Enter 1 for addition 2 for subtraction 3 for division 4 for multiplication"<<endl;
cin>>n;
cout<<" enter two number"<<endl;
cin>>a;
cin>>b;
if(n==1)
c=a+b;
if(n==2)
c=a-b;
if(n==3)
c=a/b;
if(n==4)
c=a*b;
cout<<c;
getch();
}

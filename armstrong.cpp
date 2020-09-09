#include<iostream>
#include<cmath>
using namespace std;
int main()
{ long a,sum=0,n,c;
 cin>>n;
 a=n;
 while(n!=0)
 { c=n%10;
   sum=sum+pow(c,3);
  n=n/10;
  
 }
 if(sum==a)
 cout<<"Give to Scientist Armstrong";
 else if(sum!=a)
   cout<<"Don't Give to Scientist Armstrong";
 return 0;
}

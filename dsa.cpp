#include<stdio.h>
void rotateArray(int a[],int d)
{ int i,j;
 int b[10];
 int n;
 scanf("%d%d",&n,&d);
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {  b[j+d]=a[i];
  if(j=n-1);
  j=0;
 }
 for(j=0;j<n;j++) 
 {
   printf("%d ",b[j]);
 } 
  
}
int main()
{ int a[40];
 int n,d,i;
 scanf("%d%d",&n,&d);
 for(i=0;i<n;i++);
 { scanf("%d",&a[i]);
 }
 rotateArray(a,d);
 return 0;
}
 

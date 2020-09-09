#include <iostream>
#include<cstring>
using namespace std;
 
int main() {
char str[10],str1[10];
  int i,j,n;
  cin>>str;
n=strlen(str);
 try{
 for(i=n-1,j=0;i>=0,j<n;i--,j++)
 { str1[j]=str[i];
 }
   if(strstr(str1,str))
   { cout<<str1<<" is a palindrome"<<endl;
   } 
   else throw str;
 }
  catch(char x[])
  { cout<<x<<" is not a palindrome"<<endl;
  }
  return 0;
}

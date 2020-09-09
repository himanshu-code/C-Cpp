#include <iostream>
#include<cstring>
using namespace std;
int main() {
  int i,j,k,n,flag=0;
  //char str[1000];
  string str;
  cin>>n;
  //n++;
  for (i=0; i<n; i++)
  { flag=0;
  	cout << "in loop\n";
    //cin>>str;
    //fgets(str, 1000, stdin);
    getline(cin,str);
    //k=strlen(str);
    k=str.size();
    //cout << str << "\n";
    for (j=0; j<k-2; j++) {
      //cout << str[j];
      if (str[j]=='n' && str[j+1]=='o' && str[j+2]=='t') {
        flag++;
        //break;
      }
   }
   
   if(flag) {
   	
     cout<<"Real Fancy\n";
   }
   else {
     cout<<"Regularly Fancy\n";
   }
    
  }
  
	return 0;
}

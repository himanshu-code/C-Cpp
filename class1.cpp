#include <iostream>
using namespace std;
	class Bank
    { public:
      char name[10];
     char acctype[10];
     int accno;
     double bal;
     
     void initial()
     { cin>>name>>accno>>acctype>>bal;
     }
     void deposit()
     { int add;
      cin>>add;
      bal=bal+add;
      
     }
     void withdraw()
     { int draw;
      cin>>draw;
     if(draw<bal)
      bal=bal-draw;
      else
        cout<<"Insufficient amount";
        }
     void disp()
     { cout<<"NAME="<<name;
      cout<<"ACCNO="<<accno;
      cout<<"TYPE="<<acctype;
      cout<<"BALANCEAMOUNT="<<bal;
     }
    };
  int main()
  {
    Bank obj;
   obj.initial();
   obj.deposit();
   obj.withdraw();
   obj.disp();
     
     
	return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	//char str[1000];
	int flag;
	while(n--) {
		//getline(cin, str);
		//fgets(str, 1000, stdin);
		cin >> str;
		flag=0;
		/*
		for (int i=0; i<str.size()-2; i++) {
			if (str[i]=='n' && str[i+1]=='o' && str[i+2]=='t') {
				flag++;
			}
		}
		cout << flag << "\n";
		*/
		if (strstr(str.c_str(), "not".c_str())) {
			cout << "found\n";
		}
		
	}
	return 0;
}

#include<iostream>
using namespace std;

int main (){
	int count=0;
	for ( char ch='A'; ch<='Z'; ch++){
		if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
			cout<<ch<<" ("<<++count<<")"<< endl;
			count = 0;
		}
		else {	cout << ch << " ";
				count++;
		}
	}
	cout<<" ("<<count<<")"<< endl;
	cout << endl;
	return 0;
}

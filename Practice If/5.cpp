#include<iostream>
using namespace std;

int main (){
	int s1, s2;
	cout << "Enter 1st side of trinagle: ";
	cin >> s1;
	cout << "Enter 2nd side of trinagle: ";
	cin >> s2;
	if( s1==s2 )	cout << "These two sides represent a square\n";
	else 			cout << "These two sides represent a Rectangle\n";
	return 0;
}


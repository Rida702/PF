#include<iostream>
using namespace std;

int main (){
	int num1, num2;
	cout << "Enter 1st Number: ";
	cin >> num1;
	cout << "Enter 2nd Number: ";
	cin >> num2;
	cout << "Output: ";
	if( num1>num2 )		cout << num2 << " " << num1 << endl;
	else				cout << num1 << " " << num2 << endl;
	return 0;
}


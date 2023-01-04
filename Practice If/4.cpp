#include<iostream>
using namespace std;

int main (){
	int num1, num2;
	cout << "N1: ";
	cin >> num1;
	cout << "N2: ";
	cin >> num2;
	if( num1>num2 )	{
		cout << "Larger Number: "<< num1 << endl;
		cout << "Smaller Number: "<< num2 << endl;
	}
	else {
		cout << "Larger Number: "<< num2 << endl;
		cout << "Smaller Number: "<< num1 << endl;
	}
	return 0;
}


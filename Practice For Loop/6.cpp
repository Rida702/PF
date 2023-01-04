#include<iostream>
using namespace std;

int main (){
	int number=0;
	cout << "Test data: ";
	cout << "Input the number (Table to be calculated) : ";
	cin >> number;
	for( int i=1; i<=10; i++)
		cout << number << " X " << i << " = " << i*number << endl;
	return 0;
}


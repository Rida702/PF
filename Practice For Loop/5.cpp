#include<iostream>
using namespace std;

int main (){
	int size=0;
	cout << "Test data: ";
	cout << "Input the number of terms : ";
	cin >> size;
	for( int i=1; i<=size; i++)
		cout << "Number is: " << i << " and cube of the "<< i << " is: " << i*i*i << endl;
	return 0;
}


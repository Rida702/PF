#include<iostream>
using namespace std;

int main (){
	int sum=0, number=0;
	for ( int i=0; i<5; i++){
		cout << "Enter Number: ";
		cin >> number;
		sum+=number;
	}
	cout << "Sum: " << sum << endl;
	return 0;
}


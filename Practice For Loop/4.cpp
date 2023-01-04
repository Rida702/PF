#include<iostream>
using namespace std;

int main (){
	int sum=0, data=0;
	float avg=0;
	cout << "Test data: ";
	cout << "Input the 10 numbers : \n";
	for( int i=0; i<10; i++){
		cout << "Number-" << i+1 << " :";
		cin >> data;
		sum+=data;
	}
	cout << endl;
	cout << "The Sum of 10 no is: "<< sum << endl;
	avg = sum/10.0;
	cout << "The Average is: "<< sum/10 << endl;
	cout << "The Average is: "<< sum/10.0 << endl;
	cout << "The Average is: "<< avg << endl;
	return 0;
}


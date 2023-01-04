#include<iostream>
using namespace std;

int main (){
	int n;
	cout << "Enter number of books you bought this month: ";
	cin >> n;
	if(n==0)		cout << "Number of points: " << 0 << endl;
	else if(n==1)	cout << "Number of points: " << 5 << endl;
	else if(n==2)	cout << "Number of points: " << 15 << endl;
	else if(n==3)	cout << "Number of points: " << 30 << endl;
	else if(n>=4)	cout << "Number of points: " << 60 << endl;
	else			cout << "Invalid Input." << endl;
	return 0;
}


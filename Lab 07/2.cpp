#include<iostream>
using namespace std;

int main (){
	int x;
	cout << "Enter a positive non-zero integer: ";
	cin >> x;
	for( int i=0; i<x/2; i++){
		if( i*i==x ){
			cout << x << " is perfect square" << endl;
			return 0;
		} 
	}
	cout << x << " is not perfect square" << endl;
	return 0;
}


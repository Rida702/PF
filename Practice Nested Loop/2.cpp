#include<iostream>
using namespace std;

int main (){
	int k=1, n=0;
	cout << "Enter any number: ";
	cin >> n;
	for( int i=0; i<n; i++){
		for( int s=0; s<n-i-1; s++) {		
			cout << " "; }
		for( int j=0; j<i+1; j++){
			cout << "* ";	}	
		cout << endl;
	}
	return 0;
}


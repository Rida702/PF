#include<iostream>
using namespace std;

int main (){
	int k=1, n=0;
	cout << "Enter any number: ";
	cin >> n;
	for( int i=0; i<n; i++){
		for( int j=0; j<5; j++){
			cout << k++ << " ";	}	
		cout << endl;
	}
	return 0;
}


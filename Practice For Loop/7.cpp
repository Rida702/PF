#include<iostream>
using namespace std;

int main (){
	int size=0;
	cout << "Test data: ";
	cout << "Input upto the table number starting from 1 :";
	cin >> size;
	cout << "Multiplication table from 1 to " << size << endl;
	for( int i=1; i<=10; i++){
		for( int j=1; j<=size; j++){
		if ( j==size ) cout <<j<<"x"<< i<<"="<< i*j<<endl;		
		else 		   cout <<j<<"x"<< i<<"="<< i*j<<",";
		}
	}
	return 0;
}


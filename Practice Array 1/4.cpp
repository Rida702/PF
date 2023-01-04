#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int a[10], Cpositive=0, Cnegative=0;
	for( int i=0; i<10; i++){
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Even Numbers: \n";
	for( int i=0; i<10; i++){
		if ( a[i]%2==0 ) cout << a[i] << " ";
	}
	cout << endl;
	cout << "Odd Numbers: \n";
	for( int i=0; i<10; i++){
		if ( a[i]%2!=0 ) cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}

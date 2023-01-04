#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int *a, *b, size1,size2, suma, sumb;
	cout << "Enter Size of array 1: ";
	cin >> size1;
	a = new int[size1];
	for( int i=0; i<size1; i++, a++){
		*a= rand()%100;
		cout << *a << " ";
		suma+=*a;
	}
	cout << endl;
	cout << "Enter Size of array 2: ";
	cin >> size2;
	b = new int[size2];
	for( int i=0; i<size2; i++, a++){
		*b= rand()%100;
		cout << *b << " ";
		sumb+=*b;
	}
	cout << endl;
	cout << "Average of array 1: " << suma/size1 << endl;
	cout << "Average of array 2: " << sumb/size2 << endl;
	if ( (suma/size1)>(sumb/size2) )	cout << "Array 1 average is greater than Array 2\n";
	else								cout << "Array 2 average is greater than Array 1\n";
	delete a;
	delete b;
	return 0;
}


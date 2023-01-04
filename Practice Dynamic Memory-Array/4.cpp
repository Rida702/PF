#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int *a, *b, size1,size2, *c;
	cout << "Enter Size of array 1: ";
	cin >> size1;
	a = new int[size1];
	cout << "Enter Size of array 2: ";
	cin >> size2;
	b = new int[size2];
	c = new int[size1+size2];
	int k=0;
	for( int i=0; i<size1; i++){
		a[i]= rand()%100;
		cout << a[i] << " ";
		c[k++]=a[i];
	}
	cout << endl;
	for( int i=0; i<size2; i++){
		b[i]= rand()%100;
		cout << b[i] << " ";
		c[k++]=b[i];
	}
	cout << endl;

	for( int i=0; i<size1+size2; i++){
		cout << c[i] << " ";
	}
	cout << endl;
	return 0;
}


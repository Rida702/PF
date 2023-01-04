#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int *a, size;
	cout << "Enter Size of array: ";
	cin >> size;
	a = new int[size];
	for( int i=0; i<size; i++, a++){
		*a= rand()%100;
		cout << *a << " ";
	}
	cout << endl;
	delete a;
	return 0;
}


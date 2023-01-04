#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

// %5 means %5+0 means generate values out of range 5 starting from 0 to onwards 5 digits(0,1,2,3,4)
// %5+1 means generate values out of range 5 starting from 1 to 5  (1,2,3,4,5)
// %5-1 means generate values out of range 5 starting from -1 to 3 (-1,0,1,2,3)
// %4 means %5+0 (0,1,2,3)
int main (){
	srand(time(0));
	int a[10];
	for ( int i=0; i<10; i++){
		a[i] = rand()%5;
		cout << a[i] << " ";
	}
	cout << "\n---5 (0-4) ---\n";
	for ( int i=0; i<10; i++){
		a[i] = rand()%5+1;
		cout << a[i] << " ";
	}
	cout << "\n---5+1 (1-5)---\n";
	for ( int i=0; i<10; i++){
		a[i] = rand()%5-1;
		cout << a[i] << " ";
	}
	cout << "\n---5-1---\n";
	for ( int i=0; i<10; i++){
		a[i] = rand()%4;
		cout << a[i] << " ";
	}
	cout << "\n---4---\n";
	return 0;
}

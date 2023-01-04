#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int a[10];
	for ( int i=0; i<10; i++){
		a[i] = rand()%100;
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}

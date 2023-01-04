#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int x1,x2;
	for ( int i=0; i<5; i++){
		x1 = rand()%100;
		x2 = rand()%100;
		if ( x1<x2 )	cout << x1 << " " << x2 << endl;
		else			cout << x2 << " " << x1 << endl;
	}
	
	return 0;
}


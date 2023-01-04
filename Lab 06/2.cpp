#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int x;
	for ( int i=0; i<5; i++){
		x = rand()%100;
		cout << "Square of " << x << " is " << x*x << endl;
	}
	
	return 0;
}


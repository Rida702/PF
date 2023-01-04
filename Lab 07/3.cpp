#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int x, counteven=0, countodd=0;
	for ( int i=0; i<10; i++){
		x = rand()%40000+15000;
		cout << x << " ";
		if (x%2==0)	counteven++;
		else		countodd++;
	}
	cout << "\nCount of even numbers: " <<  counteven << endl;
	cout << "Count of odd numbers: " <<  countodd << endl;
	return 0;
}


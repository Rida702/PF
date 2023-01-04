#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int a[10], Cpositive=0, Cnegative=0;
	for( int i=0; i<10; i++){
		a[i] = rand() % 101 - 50;
		if ( a[i] < 0 )		Cnegative++;
		else				Cpositive++;
		cout << a[i] << " ";
	}
	cout << "\nCount of Negative Numbers: " << Cnegative << endl;
	cout << "Count of Positive Numbers: " << Cpositive << endl;
	return 0;
}

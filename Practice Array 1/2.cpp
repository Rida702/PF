#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int a[10], count=0;
	for ( int i=0; i<10; i++){
		a[i] = rand()%100;
		if ( a[i]<50 ) count++;
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Count of Elements less than 50 are: " << count << endl;
	return 0;
}

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int x[5][5];
	for( int i=0; i<5; i++){
		for( int j=0; j<5; j++){
			x[i][j] = rand()%10+1;
			cout << x[i][j] <<" ";
		}
		cout << endl;
	} 
	cout << "\n--------------\n\n";
	for( int i=0; i<5; i++){
		for( int j=0; j<5; j++){
			if ( i==j )cout << x[i][j] <<" ";
		}
	}
	cout << endl;
	return 0;
}


#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int x[5][5], y[5][5], z[5][5];
	for( int i=0; i<5; i++){
		for( int j=0; j<5; j++){
			x[i][j] = rand()%10;
			cout << x[i][j] << " ";
		}
		cout << endl;
	} 
	cout << "\n--------------\n\n";
	for( int i=0; i<5; i++){
		for( int j=0; j<5; j++){
			y[i][j] = rand()%10;
			cout << y[i][j] <<" ";
		}
		cout << endl;
	}
	cout << "\n--------------\n\n";
	for( int i=0; i<5; i++){
		for( int j=0; j<5; j++){
			if ( x[i][j]==y[i][j ])		z[i][j]=1;
			else						z[i][j]=0;
			cout << z[i][j] <<" ";
		}
		cout << endl;
	}
	
	return 0;
}


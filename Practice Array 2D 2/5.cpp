#include<iostream>
#include<cstdlib>
#include<ctime>
#define ROWS 6
#define COLUMNS 8
using namespace std;

int main (){
	srand(time(0));
	int arr[ROWS][COLUMNS];
	for( int i=0; i<ROWS; i++){
		for( int j=0; j<COLUMNS; j++){
			arr[i][j] = rand()%10;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout << "---------------------------\n";
	for( int i=0; i<ROWS; i++){
		for( int j=0; j<COLUMNS; j++){
			if ( arr[i][j]==0 ) cout<< "* ";
			else				cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


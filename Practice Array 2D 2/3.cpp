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
			arr[i][j] = rand()%100;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout << "---------------------------\n";
	int row=0, col=0;
	while( (row>6 || row<1) || (col>8 || col<1) ){
	cout << "Enter Row Number: ";
	cin >> row;
	cout << "Enter Column Number: ";
	cin >> col;
	if ( (row>6 || row<1) || (col>8 || col<1) )		
		cout << "You have entered wrong values, please give input in range\n";
	else
		cout << "Your Desired Element is: " << arr[row-1][col-1] << endl;
	}
	
	return 0;
}


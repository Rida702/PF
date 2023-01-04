#include<iostream>
#include<cstdlib>
#include<ctime>
#define ROWS 3
#define COLUMNS 5
using namespace std;

int main (){
	srand(time(0));
	int x[ROWS*COLUMNS] = {7,38,71,7,82,14,27,66,30,3,44,33,40,85,62};
	int arr[ROWS][COLUMNS], k=0;
	for ( int i=0; i<ROWS*COLUMNS; i++)
		cout << x[i] << " ";
	cout << "\n-----------\n";
	for ( int i=0; i<ROWS; i++)
		for( int j=0; j<COLUMNS; j++)
			arr[i][j] = x[k++];
			
	for ( int i=0; i<ROWS; i++){
		for( int j=0; j<COLUMNS; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << "\n-----------\n";
	for ( int i=0; i<ROWS; i++){
		for( int j=0; j<COLUMNS; j++){
			arr[i][j] = rand()%100+1;
			cout << arr[i][j] << " ";
		}	
		cout << endl;
	}
	cout << "\n-----------\n";
	for ( int i=0; i<ROWS; i++){
		for( int j=0; j<COLUMNS; j++){
		x[i*COLUMNS+j] = arr[i][j];
		cout << x[i*COLUMNS+j] << " ";
		}
	}
		
	return 0;
}


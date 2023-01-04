#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main  (){
	srand(time(0));
	int arr[10];
	for( int i=0; i<10; i++){
		arr[i] = rand()%100+1;
		cout << arr[i] << " ";
	}
	cout << endl;
	
	for( int i=0; i<10; i++){
		if ( i%2!=0) cout << arr[i] << endl;
		else cout << arr[i] << " ";
	}
	cout << endl;
	cout << "----";
	cout << endl;
	for( int i=0; i<9; i++){
		cout << arr[i] << " " << arr[i+1] << "\n";
	}
return 0;
}

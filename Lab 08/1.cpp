#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int arr[5];
	for( int i=0; i<5; i++){
		arr[i]=rand()%10000+20000;
		cout << arr[i] << " ";
	}
	cout << endl;
	for( int i=0; i<4; i++)
		cout << "( " << arr[i] << " , " << arr[i+1] << " )" << endl;
	return 0;
}

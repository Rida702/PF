#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int arr[10], avg, sum;
	for( int i=0; i<10; i++){
		arr[i]=rand()%50+1;
		cout << arr[i] << " ";
		sum+=arr[i];
	}
	cout << endl;
	avg = sum/10;
	cout << "Average: " << avg << endl;
	for( int i=0; i<10; i++){
		arr[i]-=avg;
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

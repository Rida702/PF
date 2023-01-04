#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int arr[10], sum=0;
	for( int i=0; i<10; i++){
		arr[i]=rand()%9+1;
		sum+=arr[i];
		cout << arr[i] << "\t" << sum << endl;
	}
	return 0;
}

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	float arr[10], avg, sum, min=999, max=0;
	for( int i=0; i<10; i++){
		arr[i]=float(rand())/(float(1000))*1;
		cout << arr[i] << " ";
		sum+=arr[i];
		if( arr[i]>max )	max=arr[i];
		if( arr[i]<min )	min=arr[i];
	}
	cout << endl;
	avg = sum/10;
	cout << "M1: " << avg << "\tM2: " << min << "\tM3: " << max << endl;
	
	for ( int i=0; i<10; i++){
		if( arr[i]<avg )		cout << "Day " << i+1 << " has pleasant weather" << endl;
		else if( arr[i]<min )	cout << "Day " << i+1 << " has below moderate weather" << endl;
		else if( arr[i]<max )	cout << "Day " << i+1 << " has above moderate weather" << endl;
		else					cout << "Day " << i+1 << " Day no has hot weather" << endl;
	}
	return 0;
}

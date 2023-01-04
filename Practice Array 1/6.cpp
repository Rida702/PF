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
if(i%2==0) {
	if (arr[i]>arr[i+1]) 
	cout<<i+1<<" number("<<arr[i]<<") is greater than "<<i+2<<" number("<<arr[i+1]<<")"<<endl;
	else 				 
	cout<<i+1<<" number("<<arr[i]<<") is less than "<<i+2<<" number("<<arr[i+1]<<")"<<endl;
	}
	else continue;
}
	
	
return 0;
}

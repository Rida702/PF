#include<iostream>
using namespace std;

int main (){
	int sum=0;
	for( int i=0; i<10; i++){
		cout << i+1 << " ";
		sum+=(i+1);
	}
	cout << endl;
	cout << "The Sum is: " << sum << endl;
	return 0;
}


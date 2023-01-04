#include<iostream>
using namespace std;

int main (){
	int sum=0;
	for( int i=1; i<=10; i++){
		cout << 2*i-1 << " ";
		sum+=(2*i-1);
	}
	cout << endl;
	cout << "The Sum is: " << sum << endl;
	return 0;
}


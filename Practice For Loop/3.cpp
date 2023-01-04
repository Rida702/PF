#include<iostream>
using namespace std;

int main (){
	int sum=0, size=0;
	cout << "Test data: ";
	cin >> size;
	cout << "The first " << size << " natural number is: \n";
	for( int i=0; i<size; i++){
		cout << i+1 << " ";
		sum+=(i+1);
	}
	cout << endl;
	cout << "The Sum of Natural Number upto " << size << " terms: " << sum << endl;
	return 0;
}


#include<iostream>
using namespace std;

int main (){
	int num, n;
	cout << "Enter Number: ";
	cin >> num;
	cout << "Enter Number of Multilplications you want to see: ";
	cin >> n;
	for ( int i=0; i<n; i++ )
		cout << num << " X " << i+1 << " = " << num*(i+1) << endl;
	return 0;
}

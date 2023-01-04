#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int x, x1;
	cout << "Enter a positive number: ";
	cin >> x;
	x1 = rand()%x;
	cout << x << endl;
	cout << x1 << endl;
	return 0;
}

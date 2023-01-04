#include<iostream>
using namespace std;

float absoulte( float value){
	if ( value<0)	value*=-1;
	else			value*1;
	return value;
}

int main (){
	srand(time(0));
	int n;
	float s2,s1;
	cout << "Enter a positive non-zero integer: ";
	cin >> n;
	s1 = rand()%n;
	s2 = ((n/s1)+s1)/2.00;
	do{
		if ( absoulte(s2-s1)>0.00001 ) {
			s1 = s2;
			s2 = ((n/s1)+s1)/2.00;
		}
		else break;
	}while(absoulte(s2-s1)>0.00001);
	cout << "Square Root of " << n << " is " << s1 << endl;
	return 0;
}

#include<iostream>
using namespace std;

float absoulte( float value){
	if ( value<0){
		value*=-1;
		return value;
	}	
	else	return value;
	
}

int main (){
	float number;
	cin >> number;
	cout << absoulte(number) << endl;
}



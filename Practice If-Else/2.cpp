#include<iostream>
using namespace std;

int main (){
	int mass=0;
	float weight=0;
	cout << "Enter mass of the object: ";
	cin >> mass;
	weight = mass*9.8;
	cout << "Weight: " << weight << " Newtons" << endl;
	if(weight>1000)	   cout << "Object is too heavy" << endl;
	else if(weight<10) cout << "Object is too Light" << endl;	
	return 0;
}


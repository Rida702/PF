#include<iostream>
using namespace std;

int main (){
	int checks=0;
	cout << "Enter Number of checks: ";
	cin >> checks;
	if (checks>0 && checks<20)	
		cout << "Your bank fee is: " << 10+10 << "$" << endl;
	else if (checks>=20 && checks<40)	
		cout << "Your bank fee is: " << 8+10 << "$" << endl;
	else if (checks>=40 && checks<60)	
		cout << "Your bank fee is: " << 6+10 << "$" << endl;
	else if (checks>=60 )	
		cout << "Your bank fee is: " << 4+10 << "$" << endl;
	else
		cout << "Invalid Input.\n";
	return 0;
}


#include<iostream>
using namespace std;

int main (){
	int second=0;
	cout << "Enter Seconds: ";
	cin >> second;
	if(second>=86400)	   				  cout << "Number of days: "<< second/86400.00 << endl;
	else if(second>=3600 && second<86400) cout << "Number of Hours: "<< second/3600.00 << endl;
	else 							 	  cout << "Number of Minutes: "<< second/60.00 << endl;
	return 0;
}


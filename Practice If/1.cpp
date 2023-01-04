#include<iostream>
using namespace std;

int main (){
	int n;
	printf("Enter Number (1-5):");
	scanf("%d",&n);
	if (n==1)
	printf("One\n");
	else if (n==2)
	printf("Two\n");
	else if (n==3)
	printf("Three\n");
	else if (n==4)
	printf("Four\n");
	else if (n==5)
	printf("Five\n");
	else	cout << "Invalid Input" << endl;
	return 0;
}


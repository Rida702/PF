#include<iostream>
using namespace std;

int main (){
	int n;
	printf("Enter Number (1-9):");
	scanf("%d",&n);
	if (n==1)		printf("I\n");
	else if (n==2)	printf("II\n");
	else if (n==3)	printf("III\n");
	else if (n==4)	printf("IV\n");
	else if (n==5)	printf("V\n");
	else if (n==6)	printf("VI\n");
	else if (n==7)	printf("VII\n");
	else if (n==8)	printf("VIII\n");
	else if (n==9)	printf("IX\n");
	else	cout << "Invalid Input" << endl;
	return 0;
}


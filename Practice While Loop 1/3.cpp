#include<iostream>
using namespace std;

int main(){
	int count = 10;
	while (count <= 20){
	printf ("%d ", count);
	count = count + 1;
	}
	printf ("\n");//Move to next line
	count = 20;//Initialize variable to start with 20
	while (count >= 10){
	printf ("%d ", count);
	count = count - 1;
	}
	printf ("\n");
	return 0;
}


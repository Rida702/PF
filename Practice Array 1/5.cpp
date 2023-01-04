#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int arr[10], num=0;
	arr[0] = rand()%25+1;
	cout << arr[0] << " ";
	for(int i=1; i<10; i++){
		here:
		num = rand()%25+1;
		if(num>=arr[i-1])	arr[i]=num;
		else goto here;
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}

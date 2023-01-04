#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main (){
	srand(time(0));
	int x, y;
	for ( int i=0; i<5; i++){
		x = rand()%8+2;
		y = rand()%13+2;
		cout <<x<<"^"<<y << " = "<< pow(x,y) <<endl;
	}
	
	return 0;
}


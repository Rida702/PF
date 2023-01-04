#include<iostream>
using namespace std;

int main(){
	int x =0, y= 0;
	while (x < 5){
		printf ("%d%d ", x, y);
		x = x + 1;
		y = y + 2;
		if ( y>4 ) y--;
	}
	return 0;
}


#include<iostream>
using namespace std;

int main(){
	int x =0, y= 0;
	while (x < 5){
		printf ("%d%d ", x, y);
		x = x + 1;
		y = x - y;
	}
	return 0;
}


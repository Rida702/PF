#include <stdio.h>

int main (){
	int a=2, b=4,c=2;
	printf("Sum of Squares of %d & %d: %d\n", a,b, (a*a)+(b*b));
	a=6, b=2;
	printf("%d/%d: %d\n",a,b,a/b);
	printf("%d+%d/%d: %d\n",a,b,c,(a+b)/c);
	return 0;
}


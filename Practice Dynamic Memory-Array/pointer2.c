#include<stdio.h>

int main (){
	int a[]={12,54,78,64,39,76,65,34};
	int b[]={124,454,678,364,839,976,165,234};
	int *c=a, i ;
	for (i=0;i<5;i++)
	printf ("%d ", c[i]);
	printf ("\n");
	c = &b[2];
	for (i=0;i<5;i++)
	printf ("%d ", c[i]);
	printf ("\n");
	return 0;
}

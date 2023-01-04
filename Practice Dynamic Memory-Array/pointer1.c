#include<stdio.h>

int main (){
	int a[]={12,54,78,64,39,76,65,34};
	int *b=a, *c=&a[3], i;
	for (i=0;i<5;i++, b++)
	printf ("%d ", *b);
	printf ("\n");
	for (i=0;i<5;i++, c++)
	printf ("%d ", *c);
	printf ("\n");
	b=&a[2];
	for (i=0;i<5;i++)
	printf ("%d ", b[i]);
	printf ("\n");
	return 0;
}

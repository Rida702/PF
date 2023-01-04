#include<stdio.h>

int main (){
	int *a, *b, *c;
	int d=5, e=6, f=7;
	a = &d; b = &e; c = &f;
	printf ("%d %d %d\n", *a, *b, *c);
	b = a;
	printf ("%d %d %d\n", *a, *b, *c);
	c = b;
	printf ("%d %d %d\n", *a, *b, *c);
	*b = *c + 10;
	printf ("%d %d %d\n", *a, *b, *c);
	c = &e; b = &f;
	printf ("%d %d %d\n", *a, *b, *c);
	*c = *a + *b;
	*b = *a + *c;
	printf ("%d %d %d\n", *a, *b, *c);

}

#include <stdio.h>
int main()
{
	int a,i;
	 i=1;
	   	
	while (i<=5)
	   {
	   	printf ("Enter Number:");
	   	scanf ("%d",&a);
	   	
	   	if (a%2==0)
	   	printf("%d is divisible by 2\n", a);
	   	else
	   	printf("%d is not divisible by 2\n",a);
	   	
	   	if (a%3==0)
	   	printf("%d is divisible by 3\n", a);
	   	else
	   	printf("%d is not divisible by 3\n", a);
	   	
	   	if (a%5==0)
	   	printf("%d is dividible by 5\n", a);
	   	else
	   	printf("%d is not divisible by 5\n", a);
	   	
	   	if (a%7==0)
	   	printf("%d is divisible by 7\n", a);
	   	else
	   	printf("%d is not dividisle by 7\n", a);
	   	
	   	if (a%9==0)
	   	printf("%d is divisible by 9\n", a);
	   	else
	   	printf("%d is not divisible by 9\n", a);
	   	printf("-----------------------------------\n");
	  		i=i+1;
	   }
	
	
}

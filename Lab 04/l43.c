#include <stdio.h>

void main()
{
int n = 1;
while (n <= 1000){
	if (n % 5 == 0 && n % 2 != 0 && n % 10 != 0 && n % 3 !=0 && n % 4 !=0 && n % 6 != 0 && n % 7 != 0 && n %8 != 0 && n % 9 !=0 )
printf("%d\t",n);
n = n + 1;
}
	return 0;
}
 

#include <stdio.h>

int main(){
	float vf , vi , a  , t ;
	printf ("Enter values:");
	scanf("%f %f  %f" ,&vi , &a , &t);
	vf=vi + (1/2) *a*(t*t);
	printf("%f\n" ,vf);
	
		return 0;
}
 

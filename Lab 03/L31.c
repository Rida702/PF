#include<stdio.h>    
int main()

 {  int x,y,z;
     printf("Enter three numbers:");
     scanf("%d %d %d",&x,&y,&z);
 
    if(x<y && x>z) { 
	printf("smallest number =%d\n middle number=%d\n largest number=%d",z,x,y);
	
	} 
	else if(x<z && x>y) { 
	printf("smallest number =%d\n middle number=%d\n largest number=%d",y,x,z);
	}	
	
	else if(y<x && y>z) { 
	printf("smallest number =%d\n middle number=%d\n largest number=%d",x,y,z);
	}
	
	else if(z<y && z>x) { 
    printf("smallest number =%d\n middle number=%d\n largest number=%d",x,z,y);
	}
 	return 0;  
    }

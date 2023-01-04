#include<stdio.h>    
int main()

 {
 int a,b,c,y,n,yes,no;
	y=yes;
	n=no;
	printf("enter marks in basic test:");
	scanf("%d",&a);
	if(a>=0 && a<60)
		printf("Sorry, you are fail in basic test.");
	else if(a>=60){
	printf("Congratulations! You are selected for coding test");
	}
	printf("enter marks in coding test:");
	scanf("%d",&b);
	if(b>=0 && b<70)
		printf("Sorry, you are fail in coding test.");
	else if(b>=70){
	printf("Congratulations! You are selected for interview");
	}
	printf("enter interview result(y for yes and n for no):");
	scanf("%d",&c);
	
	if(c==y)
		printf("Congratulations! You are selected for job",y);
	else if(c==n){
	printf(" Sorry, you are not selected for job",n);
	}
	
	return 0;

	
	
}


 	
 	
 	
  

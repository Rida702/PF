# include <stdio.h>

int main(){
int n = 1, s = 1, r = 1;
while (n<=20){
	printf("*");
	n = n + 1;
}
while (s<=8){
	printf("*                    *\n");
	s = s + 1;
}
while (r<=20){
	printf("*");
	r = r + 1;
}
	return 0;
}

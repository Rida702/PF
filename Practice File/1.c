#include<stdio.h>

int main(){
	
	FILE *f;
	int count=0;
	f = fopen("1.c","r");
	char ch;
	int i;
	do{
	ch=fgetc(f);//Read one character from file
	if (ch==EOF)//If end of file reached condition becomes true
	break;
	else if (ch==';') count++;
	printf("%c", ch);
	}while(1);
	printf("Count: %d\n", count);
	return 0;
}


#include<stdio.h>

int main(){
	
	FILE *f;
	int count1=0, count2=0;
	f = fopen("1.c","r");
	char ch;
	int i;
	do{
	ch=fgetc(f);//Read one character from file
	if (ch==EOF)//If end of file reached condition becomes true
	break;
	else if (ch=='{') count1++;
	else if (ch=='}') count2++;
	printf("%c", ch);
	}while(1);
	printf("Count of opening curly braces: %d\n", count1);
	printf("Count of closing curly braces: %d\n", count2);
	return 0;
}


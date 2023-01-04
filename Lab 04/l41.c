 #include <stdio.h>
int main (){
	int n=1, lineCount=0, lineCountLimit=1;
while (n <= 6){
printf("*");
n = n + 1;
lineCount = lineCount + 1;
if (lineCount == lineCountLimit){
printf ("\n");
lineCount = 0;
lineCountLimit = lineCountLimit + 1;
}
}
printf ("**\n");
n=6, lineCount=0, lineCountLimit=3;
while (n >= 1){
printf("*");
n = n - 1;
lineCount = lineCount + 1;
if (lineCount == lineCountLimit){
printf ("\n");
lineCount = 0;
lineCountLimit = lineCountLimit - 1;
}
}
}

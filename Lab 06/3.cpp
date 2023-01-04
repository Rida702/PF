#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	char c;
	for ( int i=0; i<5; i++){
		c = rand()% 26 + 'A';
		if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')	cout << c << " is Vowel." << endl;
		else			cout << c << " is Consonant." << endl;
	}
	
	return 0;
}


#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

int main (){
	fstream my_file;
	char ch;
	int count1=0,count2=0;
	my_file.open("1.c", ios::in);
	while(my_file.good()) {
		my_file.get(ch);
		if( ch=='{' )	count1++;
		else if( ch=='}' )	count2++;
		cout << ch;
	}
	cout << "Count of Opening Curly Braces: " << count1 << endl;
	cout << "Count of Closing Curly Braces: " << count2 << endl;
	my_file.close();
	return 0;
}


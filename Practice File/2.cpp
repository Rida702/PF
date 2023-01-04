#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

int main (){
	fstream my_file;
	char ch;
	int count=0;
	my_file.open("1.c", ios::in);
	while(my_file.good()) {
		my_file.get(ch);
		if( ch==';' )	count++;
		cout << ch;
	}
	cout << "Count of Semicolon: " << count << endl;
	my_file.close();
	return 0;
}


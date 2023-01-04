#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

int main (){
	fstream my_file;
	char ch;
	my_file.open("1.c", ios::in);
	while(my_file.good()) {
		my_file.get(ch);
		cout << ch;
	}
	my_file.close();
	return 0;
}


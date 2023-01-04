#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

int main (){
	fstream my_file;
	ofstream file1;
	char ch, ch1;
	my_file.open("1.c", ios::in);
	file1.open("1_copy.c", ios::out);
	while(my_file.good()) {
		my_file.get(ch);
		file1 << ch;
		cout << ch;
	}
	my_file.close();
	file1.close();
	return 0;
}


#include<iostream>
#include<fstream>
using namespace std;

int main (){
	ifstream file1;
	ofstream file2;
	char ch;
	file1.open("file1.txt", ios::in );
	file2.open("file2.txt", ios::out );
	while(1){
		file1.get(ch);
		file2 << ch;
		if (file1.eof())	break;
		else	cout << ch;
	}
	file1.close();
	return 0;
}


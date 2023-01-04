#include<iostream>
#include<fstream>
using namespace std;

int main (){
	ifstream file1;
	char ch;
	file1.open("file1.txt", ios::in );
	while(1){
		file1.get(ch);
		if (file1.eof())	break;
		else	cout << ch;
	}
	file1.close();
	return 0;
}


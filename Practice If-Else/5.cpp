#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int num = rand()%100+1, guess;
	cout << "My Number: " << num << endl;
	while(1){
		cout << "Enter number: ";
		cin >> guess;
		if (num>guess)		cout << "Too Low, Try Again.\n";
		else if (num<guess) cout << "Too High, Try Again.\n";
		else	{
			cout << "Congratulations. You figured out my number.\n";
			break;
		}
	}
	return 0;
}


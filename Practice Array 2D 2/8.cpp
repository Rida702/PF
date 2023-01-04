#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	srand(time(0));
	int sem1[10][5], sem2[10][5], avg=0, sum=0, avgsum=0;
	for ( int i=0; i<10; i++){
		for( int j=0; j<5; j++){	
			sem1[i][j] = rand()%101;
			cout << sem1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n-------------\n";
	for ( int i=0; i<10; i++){
		avg=0, sum=0;
		for( int j=0; j<5; j++){	
			sum+=sem1[i][j];
		}
		avg = sum/5;
		avgsum+=avg;
		cout << "Average of Student " <<i+1<<" in 1st Semester is: " << avg << endl; 
	}
	cout << "Overall Average is: " << avgsum/10 << endl;
	cout << "\n-------------\n";
	for ( int i=0; i<5; i++){
		for( int j=0; j<5; j++){	
			sem1[i][j] = rand()%101;
			cout << sem1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n-------------\n";	
	return 0;
}


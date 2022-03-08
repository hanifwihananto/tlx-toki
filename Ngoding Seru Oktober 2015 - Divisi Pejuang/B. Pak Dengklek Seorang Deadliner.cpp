#include <iostream>
using namespace std;

int main(){
	int N, J, M, D;
	cin >> N;
	
	J = N / 3600;
	N -= J * 3600;
	
	M = N / 60;
	N -= M * 60;
	 	
	cout << J << endl << M << endl << N;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int S[2000], N, D, i, j;
	cin >> S[0] >> N >> D;
	
	for(i = 1; i <= N ;i++){
		S[i] = S[i-1] + D;
	}
	
	for(j = 0; j <= N-1; j++){
		cout << S[j] << endl;
	}

	return 0;
}

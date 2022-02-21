#include <iostream>
using namespace std;

int main(){
	int N, i, j, A[100];
	cin >> N;
	
	for(i = 0; i <= N; i++){
		cin >> A[i];
	}
	
	for(j = N-1; j >= 0; j--){
		cout << A[j];
		while(j > 0){
		    cout << ",";
		    break;
		} 
	}
	
	return 0;
}

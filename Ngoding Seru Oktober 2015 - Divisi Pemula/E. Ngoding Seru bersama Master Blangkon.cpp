#include <iostream>

using namespace std;

int main(){
	int A, B, C, K, X[3], i, j, sort;
	cin >> A >> B >> C >> K;

	X[0] = A;
	X[1] = B;
	X[2] = C;
	
	if(K == 0){
		for(i = 1; i < 3; i++){
			for(j = 0; j < 3-i ; j++){
				if(X[j] < X[j+1]){
					sort = X[j];
					X[j] = X[j+1];
					X[j+1] = sort;
				}
			}
		}
	}
	
	else if(K == 1){
		for(i = 1; i < 3; i++){
			for(j = 0; j < 3-i ; j++){
				if(X[j] > X[j+1]){
					sort = X[j+1];
					X[j+1] = X[j];
					X[j] = sort;
				}
			}
		}
	}
	
	for(i = 0; i < 3; i++){
        cout << X[i] << " ";
    }
    
	return 0;
}

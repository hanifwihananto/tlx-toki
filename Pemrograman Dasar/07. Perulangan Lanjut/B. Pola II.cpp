#include <iostream>
using namespace std;

int main(){
	int n, i, j, k;
	cin >> n;
	
	for(i = 1 ; i <= n; i++){
		for(j = i + 1; j <= n; j++){
			cout << " ";
		}
		for(k = 1; k <= i; k++) {
            cout << "*";
        }
		cout << endl;
	}
}


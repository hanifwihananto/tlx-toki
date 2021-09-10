#include <iostream>
using namespace std;

int main(){
	int n, i, j, x = 0;
	cin >> n;
	
	for(i = 1; i <= n; i++){
		for(j = 0; j < i; j++){
			cout << x;
			x += 1;
			if(x == 10){
				x = 0;
			}
		}
		cout << endl;
	}
}


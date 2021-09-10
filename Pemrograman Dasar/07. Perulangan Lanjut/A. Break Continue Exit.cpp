#include <iostream>
using namespace std;

int main(){
	int n, i;
	cin >> n;
	
	for(i = 1; i <= n; i++){
		if(i % 10 == 0){
			continue;
		}
		if(i == 42){
			cout << "ERROR";
			break;
		}
		if(i >= 1){
			cout << i << "\n";
		}
	}
}


#include <iostream>
using namespace std;

int main(){
	int n, b;
	int result = 0;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> b;
		result += b;
	}

	cout << result;
}

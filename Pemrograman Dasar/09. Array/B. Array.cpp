#include <iostream>
using namespace std;

int main(){
	int i = 0, a[100];
	
	while(cin >> a[i]){
		i++;
	}
	
	for(i = i - 1; i >= 0; i--){
		cout << a[i] << endl;
	}
}


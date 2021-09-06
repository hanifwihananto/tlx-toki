#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	
	if(a%2 == 0 && a > 0){
		cout << "positif";
	} else if (a == 0){
			cout << "nol";
	} else {
		cout << "negatif";
	}
	return 0;
}

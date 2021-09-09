#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, i, total[1000], max, min;
	cin >> a;
	
	for(i = 1; i <= a; i++){
		cin >> total[i];
	}
	
	max = total[1];
	min = total[1];
	
	for(i = 1; i <= a; i++) {
		if (total[b] >= max) {
			max = total[i];
		}
		else if (total[i] <= min) {
			min = total[i];
		}
	
}


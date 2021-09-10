#include <iostream>
using namespace std;

int main(){
	int n, i, x[100000], modus, count, j, m = 1;
	cin >> n;
	
	for(i = 0; i <= n - 1;i++){
		cin >> x[i];
	}
	
	modus = x[0];
	
	for(i = 0; i <= n - 1; i++){
		if(x[i] > 0){
			count = 1;
			
			for(j = i + 1; j <= n - 1; j++){
				if(x[i] == x[j]){
					x[j] = 0;
					count++;
				}
			}
			
			if(count > m){
				m = count;
				modus = x[i];
			} else {
				if( count == m){
					if(x[i] > modus){
						m = count;
						modus = x[i];
					}
				}
			}
		}
	}
	
	cout << modus << endl;
}


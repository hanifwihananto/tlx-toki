#include <iostream>
using namespace std;

int main(){
	int B, P, L;
	cin >> B >> P >> L;
	
		if(B <= 10 && B >= 1 
		&& P <= 40 && P >= 1 
		&& L <= 90 && L >= 1){
			cout << "S";
		}
	
		else if(B <= 14 && B >= 10
		&& P <= 60 && P >= 40 
		&& L <= 120 && L >= 90){
			cout << "M";
		}
		
		else if(B <= 18 && B >= 14
		&& P <= 80 && P >= 60 
		&& L <= 180 && L >= 120){
			cout << "L";
		}
	
		else if(B <= 25 && B >= 18
		&& P <= 100 && P >= 80 
		&& L <= 200 && L >= 180){
			cout << "X";
		}

	return 0;
}

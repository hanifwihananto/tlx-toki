#include <iostream>
using namespace std;

int main(){
	int matriksA[100][100], matriksB[100][100], hasil[100][100];
	int baris, kolom1, kolom2;
	cin >> baris >> kolom1 >> kolom2;
	
	// Matriks baris x kolom1
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom1; j++){
			cin >> matriksA[i][j];
		}
	}
	
	// Matriks kolom1 x kolom2 
	for(int i = 0; i < kolom1; i++){
		for(int j = 0; j < kolom2; j++){
			cin >> matriksB[i][j];
		}
	}
	
	// Perkalian Matriks
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom2; j++){
			hasil[i][j] = 0;
			
			for(int k = 0; k < kolom1; k++){
				hasil[i][j] = hasil[i][j] + matriksA[i][k]*matriksB[k][j];
			}
		}
	}
	cout << endl;
	
	// Menampilkan Matriks
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom2; j++){
			cout << hasil[i][j] << " "; 
		}
		cout << endl;
	}
	
	return 0;	
}

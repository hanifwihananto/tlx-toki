#include <iostream>
using namespace std;

int main(){
	int matriks1[100][100], matriks2[100][100], hasil[100][100];
	int baris, kolom1, kolom2;
	cin >> baris >> kolom1 >> kolom2;
	
	// Matriks baris x kolom1
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom1; j++){
			cin >> matriks1[i][j];
		}
	}
	
	// Matriks kolom1 x kolom2 
	for(int i = 0; i < kolom1; i++){
		for(int j = 0; j < kolom2; j++){
			cin >> matriks2[i][j];
		}
	}
	
	// Perkalian Matriks
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom2; j++){
			hasil[i][j] = (matriks1[i][j] * matriks2[i][j]) + (matriks1[i][j+1] * matriks2[i+1][j]);
			cout << hasil[i][j] << " ";
		}
		cout << endl;
	}
	// Menampilkan matriks baris x kolom2
	
	
	return 0;
}

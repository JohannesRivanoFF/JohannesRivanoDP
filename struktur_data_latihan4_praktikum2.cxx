#include <iostream>
using namespace std;

/*
===========================================
           TUGAS STRUKTUR DATA
===========================================
Nama  : Johannes Rivano Fashella Febriyanto
NPM   : 2413030010
Prodi : Sisform
Kelas : 1B
Modul 2
Latihan 4
===========================================
*/

int main()
{
	int A[2][2], B[2][2], hasil_penjumlahan[2][2], hasil_perkalian[2][2];

	// Input matriks A
	cout << "Masukkan elemen matriks A 2x2: " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "A[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}
	}

	// Input matriks B
	cout << "Masukkan elemen matriks B 2x2: " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "B[" << i << "][" << j << "]: ";
			cin >> B[i][j];
		}
	}

	// Penjumlahan matriks
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			hasil_penjumlahan[i][j] = A[i][j] + B[i][j];
		}
	}

	// Perkalian matriks
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			hasil_perkalian[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j];
		}
	}

	// Output hasil penjumlahan
	cout << "\nHasil Penjumlahan Matriks: " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << hasil_penjumlahan[i][j] << " ";
		}
		cout << endl;
	}

	// Output hasil perkalian
	cout << " Hasil Perkalian Matriks: " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << hasil_perkalian[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

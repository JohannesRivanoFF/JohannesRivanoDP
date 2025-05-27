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
Latihan 3
===========================================

*/

int main()
{
	int matriks[3][4];

	// Input elemen matriks
	cout << "Masukkan elemen matriks 3x4: " << endl;
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Matriks[" << i << "][" << j << "]: ";
			cin >> matriks[i][j];
		}
	}
	cout << endl;

	// Menampilkan matriks
	cout << "Matriks yang dimasukkan: " << endl;
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matriks[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

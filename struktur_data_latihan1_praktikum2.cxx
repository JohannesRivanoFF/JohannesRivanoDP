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
Latihan 1
===========================================
*/

int main()
{
	float a[5];

	// Input 5 angka
	cout << "Masukkan 5 angka: ";
	for (int i = 0; i < 5; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	// Menampilkan angka dengan urutan index besar ke kecil
	cout << " Menampilkan angka dengan urutan index besar ke kecil: ";
	for (int i = 4; i >= 0; i--)
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	return 0;
}

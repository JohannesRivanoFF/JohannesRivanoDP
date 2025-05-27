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
Percobaan 2
===========================================
*/

int main()
{

	system ("cls");
	
	int a[100];
	int i;

	for (i = 0; i <= 100; i++)
	{
		a[i] = i * 2;
	}

	for (i = 0; i < 100; i++)
	{
		cout << "a [ " << i << " ] = " << a [i] << endl;
	}
	return 0;
}
#include<iostream>

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
Percobaan 4
===========================================
*/

int main () {

	system ("cls");

	enum i { MINGGU, SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU };

	float high [SABTU + 1] = {88.3, 95.0, 91.2, 89.9, 91.4, 92.5, 86.7};
	
	for (int i = MINGGU; i <= SABTU; i++)
{
cout << "TINGGI TEMPERATUR PADA HARI KE " << "[ " << i << " ]" << " ADALAH " << high [i] << "\n\n";

	}
	
	
return 0;
}
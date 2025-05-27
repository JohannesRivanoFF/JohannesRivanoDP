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
Latihan 2
===========================================
*/


int main() {
    int a[5], nilai = 0;

    // Input 5 nilai
    cout << "Masukkan 5 nilai:\n";
    for (int i = 0; i < 5; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
        nilai += a[i];
    }

    // Hitung dan tampilkan rata-rata
    float rata_rata = nilai / 5.0;
    cout << "Nilai rata-rata adalah: " << rata_rata << endl;

    return 0;
}

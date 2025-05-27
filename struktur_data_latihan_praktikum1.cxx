#include<iostream>

using namespace std;

/*
Nama : Johannes Rivano Fashella Febriyanto
NPM : 2413030010
Modul 1
Latihan 
*/
int main()
{
	int awal,akhir,jmlh;
	
	jmlh=0;
	
	cout << "Nilai awal yang dimasukan : "; cin >> awal;
	cout << "Nilai akhir yang dimasukan : "; cin >> akhir;
	
	do
	{
		if (awal %3 == 0)
		{jmlh++;}
		else
		{}
		awal++;
	}
	while ( awal <= akhir);
	cout << "Maka jumlah bilangan kelipatan 3 dari 1-10 adalah : " << jmlh << endl;
    
    return 0;
}
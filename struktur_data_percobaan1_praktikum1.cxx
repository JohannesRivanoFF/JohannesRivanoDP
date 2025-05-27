#include<iostream>
using namespace std;

/*
Nama : Johannes Rivano Fashella Febriyanto
NPM : 2413030010
Modul 1
Percobaan 1
*/
int main()
{
	int awal,akhir;
	
	cout<<"Nilai awal yang dimasukan : "; cin>>awal;
	cout<<"Nilai akhir yang dimasukan : "; cin>>akhir;
	
	do
	{
		if(awal%2==0)
		{cout<<awal<<" : Bilangan genap"<<endl;}
		else
		{cout<<awal<<" : Bilangan ganjil"<<endl;}
		awal++;
	}
	while(awal<=akhir);
    
    return 0;
}
#include <iostream>
using namespace std;
int main(){
	int nomor, bagi, sisa=0;
	char chrpilihan;
	do
	{
		cout << "masukan satu bilangan : " ; cin >> nomor;
		cout << "masukan bilangan pembagi (2/3/4/5): "; cin >> bagi;
		cout << "bilangan yang dipilih : "<< nomor;
		cout << " bilangan pembagi  : " << " " << bagi;
		sisa = nomor % bagi;
		if(sisa == 0)
		{
			cout << " sisa bagi:tidak ada " << endl;
		}else
		{
			cout << "sisa bagi : " << sisa << endl;
		}
		cout << "apakah anda ingin meneruskan ? (y/n)" << endl;
		cin >> chrpilihan;
	}
	while(toupper(chrpilihan)== 'Y');
}

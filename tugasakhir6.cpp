#include<iostream>
using namespace std;

int main(){
	
	int genap = 2,ganjil = 1;
	
	cout << "Ganjil ";
	while(ganjil <= 35){
		cout << ganjil << " ";
		ganjil+=2;
	}
	
	cout << "\nGenap ";
	while(genap <= 34 ){
		cout << genap << " ";
		genap+=2;
	}
	
	return 0;
	
}

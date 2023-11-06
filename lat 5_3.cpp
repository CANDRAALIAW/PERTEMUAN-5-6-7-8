#include <iostream>

using namespace std;

int main(){
	int n=1;
	cetak:
		cout << "c++ sangat mudah \n";
		if(n++<10)
		goto cetak;
		
		return 0;
}

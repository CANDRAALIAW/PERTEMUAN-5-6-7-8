#include <iostream>
using namespace std;

	int findmax(int n1, int n2);
	void printmax(int m);

	main()
	{
		int i = 5;
		int j = 7;
		int n;
		
		n = findmax(i,j);
		printmax(n); 
	}
	int findmax(int n1 , int n2)
	{
		if(n1<n2)
		{return n1; }
		else
		{return n2; }
	}
	void printmax(int m)
	{
		cout <<"bilangan yang terbesar adalah : " << m <<endl;
	}



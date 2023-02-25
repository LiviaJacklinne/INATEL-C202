#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int i; //variavel de controle
	
	{for (i=1;i<=50;i++)

		if(i%2==0)	
		cout<<i<<" ";
	}
	cout<<endl;


	return 0;
}


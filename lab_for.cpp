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
	
	for (i=50;i>=1;i--)
		cout<<i<<", ";

	return 0;
}


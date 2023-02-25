#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	char texto[50];
	
	cout << " Digite a palavra : ";
	cin.getline(texto,50);
	
	for (i = strlen(texto); i >= 0; i--) 
		cout << texto [i];
	
	return 0;
}
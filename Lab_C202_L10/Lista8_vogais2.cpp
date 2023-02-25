#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int cont=0,i;
	char texto[50];
	
	cout<<"Digite seu texto: ";
	cin.getline(texto,50);
	for(i=0; i< strlen(texto); i++)
	{
			if(texto[i]== 'a')
			{
				texto[i] = 'A';
				cont++;
			}
			else if(texto[i]== 'e')
			{
				texto[i] = 'E';
				cont++;
			}
			else if(texto[i]== 'i')
			{
				texto[i] = 'I';
				cont++;
			}
			else if(texto[i]== 'o')
			{
				texto[i] = 'O';
				cont++;
			}
			else if(texto[i]== 'u')
			{
				texto[i] = 'U';
				cont++;
			}		
	}
	cout<<"Novo texto: "<<texto<<endl;
	cout<<"Total de vogais: "<<cont<<endl;

	return 0;	
}
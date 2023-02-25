#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int i,n,tempo, metempo,vencedor;
	
	tempo=1000000000;
	
	cout<<"Digite o numero de amigos: ";
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		cout<<"digite o tempo do "<<i<<"° amigo: ";
		cin>>tempo;
		
		if(tempo < metempo)
		{
			vencedor=i;
			metempo= tempo;
		}
	}
	
	cout<<"vencedor "<<vencedor<<"° amigo"<<endl;
	

	return 0;
}


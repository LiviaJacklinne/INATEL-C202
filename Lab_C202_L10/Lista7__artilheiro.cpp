#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int gols,maior = 0,artilheiro,jogador;
	
	do
	{
		
		cout<<"Digite o numero do jogador (-1 para sair): ";
	    cin>>jogador;
		cout<<"Digite o numero de gols: ";
		cin>>gols;
		if(gols > maior)
		{
			maior = gols;
			artilheiro = jogador;
		}
		
		
	}while (!(jogador == -1));
	
	cout<<"O Artilheiro é o jogador: "<<artilheiro<<endl;
	
	return 0;
}


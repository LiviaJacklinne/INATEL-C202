#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main( )
{
	setlocale (LC_ALL, "Portuguese");
	string nome;
	int i,num;
	float forca,poke,poketot,forcatot;
	poketot=0;
	forcatot=0;
	
	cout<<"digite o numero de pokemons capturados: ";
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		cout<<"digite o nome do pokemon: ";
		cin>>nome;
		cout<<"digite a quantidade de pokebolas usadas: ";
		cin>>poke;
		cout<<"digite a força do pokemon: ";
		cin>>forca;
		cout<<endl;
		
		poketot=poketot+poke;
		forcatot= forcatot+forca;
	}
	cout<<"Total de Pokebolas = "<<poketot<<endl;
	cout<<fixed<<setprecision(2)<<"Media de forca = "<<forcatot/num<<endl;
	
	return 0;
}
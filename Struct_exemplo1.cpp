#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	struct registro
	{
		string nome;
		int sexo;
		char ec; //estado civil
		int idade;
	} pop;
	
	int qparcial = 0, somaI = 0, maior = 0,i;
	
	for(i=1; i<= 4; i++)
	{
		cout<<"Digite o nome: ";
		cin>>pop.nome;
		do
		{
			cout<<"Digite o sexo (1-MASC / 2-FEM): ";
			cin>>pop.sexo;
		} while(!(pop.sexo == 1 || pop.sexo ==2));
		
		do
		{
			cout<<"Digite o estado civil (C-S-V-D): ";
			cin>>pop.ec;
		} while (!(pop.ec == 'C' || pop.ec == 'S' || pop.ec == 'V' || pop.ec == 'D'));
	 
	    cout<<"Digite a idade: ";
	    cin>>pop.idade;
	    
	    if(pop.ec == 'C')
	    	qparcial++;
	    
	    somaI = somaI + pop.idade;
	    
	    if(pop.sexo == 1 && pop.idade > maior)
	    	maior = pop.idade;	    	
	}

	cout<<"Porcentagem dos casados: "<< (qparcial*100)/4<<"%"<<endl;
	cout<<"Media de idades: "<<somaI/4.0<<endl;
	cout<<"Idade do homem mais velho: "<<maior<<endl;
	
	return 0;
}


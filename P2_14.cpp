#include <iostream>
#include <cmath> 

    using namespace std;

     int main ()
{
	float sl,sb,na,vha,percent;// salario liquido, salario bruto
	// numero de aulas, valor hora aula, percentual de desconto
	string nome;
	
	cout<< "digite o nome do professor ";
	cin>> nome;
	cout<< "digite o valor da hora aula R$ ";
	cin>> vha;
	cout<< "digite o numero de aulas ";
	cin>> na;
	cout<< "insira o percentual de desconto (%) ";
	cin>> percent;
	
	sb = vha * na;
	sl = sb - (sb * percent/100);
	
	cout<<" o professor "<<nome<<" recebe R$ "<<sb<<" como salario bruto";
	cout<<" e R$ "<<sl<<" como salario liquido"<<endl ; 
	
	
	
	
	
	
	
	return 0;
	
}

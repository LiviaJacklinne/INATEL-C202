#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	string nome;
	float nt1,nt2,nt3,resp;
	
	cout<<"digite seu nome ";
	cin>>nome;
	cout<<"digite sua nota 1 ";
	cin>>nt1;
	cout<<"digite sua nota 2 ";
	cin>>nt2;
	cout<<"digite sua nota 3 ";
	cin>>nt3;
	
	resp = (nt1+nt2+nt3)/3;
	
	if (resp >= 'resp 2/3')
	{
		cout<<nome<<" voce foi aprovado(a), sua nota foi "<<resp<<endl;
	}
	else 
	{
		cout<<nome <<" voce foi reprovado (a), sua nota foi "<<resp<<endl;
	}
	
	
	
	
	return 0;	
}
	
	
	
	
	
	

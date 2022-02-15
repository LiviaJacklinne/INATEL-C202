#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int id,i=0,boi1,boi2;
	float peso, maior=0, menor=99999999;
	
	while (i<3)
	{
		cout<<"Digite a identificação do boi: ";
		cin>>id;
		do
		{
			cout<<"Digite o peso do boi: ";
			cin>>peso;
		}while(!(peso>0));
		
			if (peso < menor)
		{
			menor = peso;
			boi2 = id;
		}
		if(peso>maior)
		{
			maior= peso;
			boi1= id;
		}
	
		i++;
	}
	cout<<endl;
	cout<<"O boi mais gordo é: "<<boi1<<" com "<<maior<<" kg"<<endl;
	cout<<"O boi mais magro é: "<<boi2<<" com "<<menor<<" kg"<<endl;
	
	return 0;
}


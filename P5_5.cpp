#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float media,maior,soma;// maior = maior temperatura
    int dia[3],temperatura[3], i,k, menor;//i,k,menor = variaveis de controle
    soma = 0; menor = 0 ;maior = -9999999; k = 0;
	 
	 for (i = 0; i<3; i++)
	 {
	 	do
		 { 	
           cout<<"Digite o dia (maior que 0): ";
           cin>>dia [i];
		 } while (!(dia [i]>= 0));
		 
	 	cout<<"Digite a temperatura do dia "<<dia[i]<<": ";
	 	cin>>temperatura [i];
	 	cout<<endl;
	 	soma = soma + temperatura[i];
	 	if (0 >= temperatura[i])
	 		menor++;
	 	
	 	if(maior < temperatura[i])
	 		maior = temperatura[i];
	 }
	 media = soma/3;
	 cout<<endl;
	 cout<<"A maior temperatura do ano foi: "<<maior<<endl;
	 cout<<"A media da temperatura anual foi: "<<media<<endl;
	 cout<<"O total de dias em que a temperatura foi menor/igual a 0: "<<menor<<endl;
	 
	 for (i = 0; i<3; i++)
	 {
	 	cout<<"Dia: "<<dia[i]<<", temperatura: "<<temperatura[i]<<endl;
	 	if (temperatura[i] < media)
	 		k++;
	 }
	 cout<<"O total de dias em que a temperatura foi menor que a media: "<<k<<endl; 
	
	return 0;
}


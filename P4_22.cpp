#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int canal,numpessoas,casa4,casa5,casa7,casa12;
	float percent4,percent5,percent7,percent12,percentotal;
	float aup,auc;// audiencia por casa, audiencia por pessoa
	casa4=0;casa5=0;casa7=0;casa12=0;percentotal=0;
	percent4=0;percent5=0;percent7=0;percent12=0;
	
	cout<<"Digite o numero do canal 4,5,7 ou 12 (0 para sair): ";
	cin>>canal;
	
		while(canal>0)
		{
			cout<<"Qual o numero de pessoas assitindo? ";
			cin>>numpessoas;
			if (canal ==4)
			{
				percent4= percent4 +numpessoas;
				casa4++;
			}	
			else if(canal==5)
			{
				percent5 =percent5 +numpessoas;
				casa5++;
			}
			else if (canal==7)
			{
				percent7 = percent7 +numpessoas;
				casa7++;
			}
			else if (canal==12)
			{
				percent12 = percent12 +numpessoas;
				casa12++;
			}
			if(canal ==4 || canal==5 || canal ==7 || canal== 12)
			{
			   percentotal++;	
			}
			cout<<"Digite o numero do canal 4,5,7 ou 12 (0 para sair): ";
	        cin>>canal;
		}
	
	if (percentotal !=0)
	{
		cout<<endl;
		aup = percent4+percent7+percent12+percent5;
		auc = casa4+casa5+casa7+casa12;
		cout<<"Audiencia do canal 4 por pessoa: "<<(percent4*100)/aup<<"%"<<endl;
		cout<<"Audiencia do canal 5 por pessoa: "<<(percent5*100)/aup<<"%"<<endl;
		cout<<"Audiencia do canal 7 por pessoa: "<<(percent7*100)/aup<<"%"<<endl;
		cout<<"Audiencia do canal 12 por pessoa: "<<(percent12*100)/aup<<"%"<<endl;
		cout<<endl;
		cout<<"Audiencia do canal 4 por casa: "<<(casa4*100)/auc<<"%"<<endl;
		cout<<"Audiencia do canal 5 por casa: "<<(casa5*100)/auc<<"%"<<endl;
		cout<<"Audiencia do canal 7 por casa: "<<(casa7*100)/auc<<"%"<<endl;
		cout<<"Audiencia do canal 12 por casa: "<<(casa12*100)/auc<<"%"<<endl;
	}
	else 
		cout<<"Canal ivalido"<<endl;
	return 0;
}


#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float val,soma;
	int i,k;
	
	k=0;
	i=0;
	soma=0;
	
	while(i<5)
	{
		i=i+1;
		cout<<"digite um "<<i<<"º numero real: ";
		cin>>val;
		if (val>0)
		{
			soma=soma+val;
			k=k+1;
		}
		
		else
		{
			cout<<val<<endl;
		}	
		
	}
	cout<<"media dos numeros positivos "<<soma/k<<endl;
	
	return 0;
}


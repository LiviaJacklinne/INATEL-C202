#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float a[4], s,soma=0;
	int i,j;
	
	for(i=0; i<4; i++)
	{
		cout<<"Digite o valor da posição "<<i<<": ";
		cin>>a[i];
    }
    
     for(j=0; j<2; j++)
	{	
		s=pow((a[0]-a[3]),2);
		soma = soma+s;	
		a[0] = a [0+1];
		a[3] = a[3-1];
	}
	cout<<"Soma = "<<soma<<endl;
	
	return 0;
}


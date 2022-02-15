#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    float soma,den,pi;
    int i;
    
    i=0;
    soma=0;
    den=3;
    while(i<51)
	{ 
		i=i+1;
		if (i%2==0)
		{
			soma = 1 + (1.0/(pow(den,3)));
		}
		else 
		{
			soma = 1- (1.0/(pow(den,3)));
		}
		den= den+2;
	}
	soma= soma*32;
	pi= pow(soma, 1.0/3);
	cout<<pi<<endl;

	return 0;
}


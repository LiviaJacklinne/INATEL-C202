#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    float soma;
    int i;
    
    soma=0;
    for (i=1;i<=50;i++)
	{
		
		soma= soma+2*i;
		
	}
	cout<<"o somatorio total é de: "<<soma<<endl;

	return 0;
}


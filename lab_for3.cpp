#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int i;// variavel de controle
	/*programa com numeros multiplos ao mesmo tempo de 3 e 2, com a contagem de 
	  1 a 100*/
	
	for(i=1;i<=100;i++)
	{
		if(i%2==0 && i%3==0)
			cout<<i<<" ";
		
	}
	cout<<endl;
		


	return 0;
}


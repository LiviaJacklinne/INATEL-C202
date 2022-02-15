#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float mat[5][5];
	int impar=0,l,c,num;
	
	for(l=0; l<5; l++)
	{
		for(c=0; c<5; c++)
		{
			do
			{
			   cout<<"Digite um numero inteiro para a linha "<<l<<" coluna "<<c<<": ";
			   cin>> mat[l][c]; 	
			} while (mat[l][c]!= floor (mat[l][c]));
			
			num = mat[l][c];
			if(num % 2 !=0)
				impar++;		
		}
	}
	cout<<endl;
	cout<<"O total de numeros impar é: "<<impar<<endl;
	
	
	return 0;
}


#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float mat[2][4], spar=0;
	int qpar=0, l,c,q1220,num;
	
	for(l=0; l<2; l++)
	{
		q1220 = 0;
		for(c=0; c<4; c++)
		{
			do
			{
		    	cout<<"Entre com o numero da linha "<<l<<" coluna "<<c<<": ";
		    	cin>>mat[l][c];
			} while (mat[l][c] != floor (mat[l][c]));
			//(!(mat[l][c]!=floor (mat[l][c])));
			num = mat[l][c];
			
			if(mat[l][c]> 12&& mat [l][c]<20)
				q1220 = q1220 + 1;
			if (num % 2 ==0)
			{
				spar = spar + mat[l][c];
				qpar++;
			}
		}
		cout<<"Numeros entre 12 e 20 na linha "<<l<<": "<<q1220<<endl;
		cout<<endl;
	}
	if (qpar >0)
       cout<<"Media dos numeros pares: "<<spar/qpar<<endl;
	else cout<<"Não foi digitado nenhum numero par"<<endl;
		
	return 0;
}


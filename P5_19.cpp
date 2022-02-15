#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float x,y, produto=1, mat[10][10];//produto recebe 1, pq é vezes
	int l,c,xx,yy; // variaveis de controle do for
	
	do
    {
		cout<<"Digite a quantidade de linhas (>1 a <=10): ";
		cin>>x;
	} while (x != floor(x) || x<=1 || x>10);
	do
	{
		cout<<"Digite a quantidade de colunas (>1 a <=10): ";
		cin>>y;
	} while (!(y == floor (y) && y>1 && y<=10 ));
	cout<<endl;
	
	xx = x; yy = y;//mudando x de float para int
	//float mat[xx][yy]; // caso a matriz n fosse declarada como [10][10]
	
	for(l=0; l<x; l++)
	{
		for (c=0; c<y; c++)
		{
			cout<<"Digite o valor da linha "<<l<<" coluna "<<c<<": ";
			cin>> mat[l][c];
			if (c==0 || l== x-1)                // equivalente 
				produto = produto * mat[l][c]; //a parte comentada
		}
		cout<<endl;
	}
/*	
	for (l=0; l<x; l++)
		produto = produto * mat[l][0];
	for (c=1; c<y; c++)
		produto = produto * mat [xx-1][c];
*/	
	cout<<endl;
	cout<<"O produto é: "<<produto<<endl;
	
	return 0;
}


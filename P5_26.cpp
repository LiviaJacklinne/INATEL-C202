#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float mat[5][3],maior,media=0;
	int c, l,lmaior,cmaior;
	
	for(c=0; c<1; c++)
	{
		for(l=0; l<5; l++)
		{
			cout<<"Digite a população do municipio da capital, coluna ";
			cout<<c<<" linha "<<l<<": ";
			cin>>mat[l][c];
			media = media + mat[l][c];
			maior = mat[0][0];
			if(mat[l][c]>maior)
			{
				maior = mat[l][c];
				lmaior = l; cmaior = c;
			}
		}
		cout<<endl;
	}
	
	for(c=1; c<3; c++)
	{
		for(l=0; l<5; l++)
		{
			cout<<"Digite a população do municipio coluna "<<c<<" linha "<<l<<": ";
			cin>>mat[l][c];
			
			if(mat[l][c]>maior)
			{
				maior = mat[l][c];
				lmaior = l; cmaior = c;
			}
				
		}
		cout<<endl;
	}
	cout<<"O municipio mais populoso esta na coluna "<<cmaior<<endl;
	cout<<"Esse municipio pertence ao estado: "<<lmaior<<endl;
	cout<<"Media da população das capitais: "<<media/5<<endl;
	
		
	
	
	return 0;
}


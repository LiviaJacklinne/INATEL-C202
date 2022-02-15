#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float mat1[2][3], mat2[2][3],matsoma[2][3];
	int l,c;
	
	cout<<"Digite os numeros da matriz 1"<<endl;
	for(l=0; l<2; l++)
	{
		for(c=0; c<3; c++)
		{
			cout<<"Linha "<<l<<" coluna "<<c<<": ";
			cin>>mat1[l][c];
		}
		cout<<endl;
	}
	cout<<"Digite os numeros da matriz 2"<<endl;
	for(l=0; l<2; l++)
	{
		for(c=0; c<3; c++)
		{
			cout<<"Linha "<<l<<" coluna "<<c<<": ";
			cin>>mat2[l][c];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Matriz soma"<<endl;
	for(l=0; l<2; l++)
	{
		for(c=0; c<3; c++)
		{
			matsoma[l][c] = (mat1[l][c]+ mat2[l][c]);
			cout<<"Linha "<<l<<" coluna "<<c<<": "<<matsoma[l][c]<<endl;		
		}
	}
	

	
	
	return 0;
}


#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float mat1[4][4], mat2[4][4];
	int l,c,x=0,y=0;
	
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			cout<<"Digite o valor da linha "<<l<<" coluna "<<c<<": ";
			cin>>mat1[l][c];
		}
	}
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			if(l == c)
				mat2[l][c] = mat1[l][c];
			else 
				mat2[l][c] = mat1[x][y] * mat1[l][c];
		}
		mat1[x][y] = mat1[x+1][y+1];
	}
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			cout<<mat2[l][c]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}


#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int mat[6][6],l, c;
	
	for(l=0; l<6; l++)
	{
		for(c=0; c<6; c++)
		{
			if(l==0 || l==5 || c==0 || c==5)
				mat[l][c] = 1;
			else if (l==1 || l==4 || c==1 || c==4)
				mat[l][c] = 2;
			else 
				mat[l][c] = 3;			
		}
	}
	
	for(l=0; l<6; l++)
	{
		for (c=0; c<6; c++)
		{
			cout<<mat[l][c]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}


#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float val,soma;
	int i,k;
	k=0;
	soma=0;
	
	for(i=0;i<5;i++)
	{
		cout<<"digite um valor real "<<endl;
		cin>>val;
		if (val>0)
		{
			soma=soma+val;
			k=k+1;
		}
		else 
			cout<<val<<endl;
	
	
	}
	cout<<"media dos numero positivos "<<soma/k<<endl;

	
	return 0;
}
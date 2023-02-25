#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main( )
{
	setlocale (LC_ALL, "Portuguese");
	int num,i,resp;// numero lido, variavel de controle, numero calculado
	resp=1;
	
	cout<<"digite um numero: ";
	cin>>num;
	
	for(i=1;i<=num; i++)
	{
		resp= resp*i;
	}
	cout<<resp<<endl;
	
	return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	int C,L;
	// 1 = branco
	//0 = preto
	cout<<"digite o numero de colunas ";
	cin>>C;
	cout<<"digite o numero de linhas ";
	cin>>L;
	
	 if (L%2!=0  && C%2 != 0)
	{
		cout<<"1"<<endl;
	}
	else if(L%2!=0 && C%2==0)
	{
		cout<<"0"<<endl;
	}
	else if (L%2==0 && C%2 != 0)
	{
		cout<<"0"<<endl;
	}
	else 
	{
		cout<<"1" << endl;
	}
	
	
	
	
	
	
	return 0;
}
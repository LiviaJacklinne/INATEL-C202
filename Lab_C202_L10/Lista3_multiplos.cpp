#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	int x,y;
	
	cout<<"insira os numeros ";
	cin>>x>>y;
	
	if (x >= y && x % y == 0)
	{
		cout <<"sim"<<endl;
	}
	else 
	{
		cout<<"nao"<<endl;
	}
	
	
	return 0;
	
}
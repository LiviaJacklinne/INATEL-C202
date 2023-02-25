#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float x,y;
	int i;
	
	cout<<"digite o valor de x "<<endl;
	cin>>x;
	y=0;
	i=0;
	
	while(i<2000)
	{
		i=i+1;
		y=y+x*i;
	}
	cout<<"o valor da parcela total é "<<y<<endl;


	return 0;
}


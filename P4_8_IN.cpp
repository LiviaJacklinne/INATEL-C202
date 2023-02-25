#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float x,y; //x numero lido, y numero calculado
	int i;//variavel controle
	
	cout<<"digite o valor de x "<<endl;
    cin>>x;
	y= 0;
	i= 0;
	
	while(i<100)
	{
		i= i+1;
		y= y+x+i;
    }
	cout<<"o valor final da expressão é "<<y<<endl;


	return 0;
}

 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

bool verifica (float x, float y, float z)
{
/*  bool sim;
	if (x < y + z && y < x + z && z < x + y)
		sim = true;
	else sim = false;	
	return sim;
*/	
	if (x < y + z && y < x + z && z < x + y)
		return true;
	return false;
}
float perimetro (float x, float y, float z)
{
/* float p;
   p = x+y+z;
   return p;
*/   
	return x+y+z;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float l1,l2,l3;
	
	do
	{
		cout<<"Entre com o primeiro lado (maior que 0): ";
		cin>>l1;
	} while (!(l1 > 0));
	do
	{
		cout<<"Entre com o segundo lado (maior que 0): ";
		cin>>l2;
	} while (!(l2 > 0));
	do
	{
		cout<<"Entre com o terceiro lado (maior que 0): ";
		cin>>l3;
	} while (!(l3 > 0));
	
	if (verifica(l1,l2,l3) == true)
	{
		cout<<"Perimetro = "<<perimetro(l1,l2,l3)<<endl;;
	}
	else cout<<"Não forma um triângulo"<<endl;
	

	return 0;
}


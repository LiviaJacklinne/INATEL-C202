#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

float media (float nx, float ny)
{
	return (nx+ny)/2;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float xn,yn, nota;
	
	cout<<"Digite o valor da nota 1: ";
	cin>>xn;
	cout<<"Digite o valor da nota 2: ";
	cin>>yn;
    nota = media (xn,yn);
    cout<<"Media = "<<fixed<<setprecision(1)<<nota<<endl;

	return 0;
}


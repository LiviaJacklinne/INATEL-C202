#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

float coordenadas (float x1, float x2, float y1, float y2)
{
	float d;
	d = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
	return d;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float i1,i2,j1,j2;
	
	cout<<"Digite o x da primeira coordenada: ";
	cin>>i1;
	cout<<"Digite o y da primeira coordenada: ";
	cin>>j1;
	cout<<"Digite o x da segunda coordenada: ";
	cin>>i2;
	cout<<"Digite o y da segunda coordenada: ";
	cin>>j2;
	
	cout<<"A distancia de um ponto ao outro é = "<<coordenadas(i1,i2,j1,j2)<<endl;
	
	return 0;
}


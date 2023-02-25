#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

float volume (float raiox)
{
	return (4*3.14 * pow(raiox,3))/3.0;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float raioy, vol;
	
	do
	{
		cout<<"Digite o valor do raio (maior que 0):";
		cin>>raioy;
	} while (!(raioy > 0));
	
	vol = volume(raioy);
	cout<<"Volume: "<<fixed<<setprecision(2)<<vol<<endl;

	return 0;
}


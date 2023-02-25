#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float num, media;
	int i,k;
	k=0;
	media=0;
	
	for(i=1;i<=10;i++)
	{
		cout<<"digite um "<<i<<"º numero: ";
		cin>>num;
		media=media+num;
		
		if (num>0)
			k++;	
	}
	cout<<fixed<<setprecision(2)<<"Positivos = "<<k<<endl;
	cout<<fixed<<setprecision(2)<<"Media = "<<media/10<<endl;

	

	return 0;
}


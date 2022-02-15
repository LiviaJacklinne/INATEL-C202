#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	 
    float a,b,c,x;
    
	cout<< "digite os valores de a, b e c "<<endl;
	cin>>a>>b>>c;
	
	x = pow(b,2) -4*a*c;
	
	if (x > 0 && a != 0)
	{
		cout<<"x1 "<< (-b + sqrt(x)) / (2*a)<<endl;
		cout<<"x2 "<< (-b - sqrt(x)) / (2*a)<<endl;
	}
	else 
	{
		cout<<"Raízes não reais "<<endl;
	}
	
	return 0;
}


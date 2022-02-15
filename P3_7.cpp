#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	char letra;
	
	cout<<"digite sua letra ";
	cin>>letra;
	
	if (letra =='a'|| letra=='e'||letra=='i'||letra =='o'||letra =='u')
	{
		cout<<"sua letra "<<letra<<" e uma vogal"<<endl;
	}
	else
	{
		cout<<"sua letra "<<letra<<" e uma consoante"<<endl;
	}
	
	return 0;
		
}
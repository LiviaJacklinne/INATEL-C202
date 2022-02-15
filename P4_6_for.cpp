#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float val,soma;
	int i;
	
	for(i=0;i<20;i++)
	{
		cout<<"digite um valor real "<<endl;
		cin>>val;
		soma=soma+val;
	}
	soma= soma/i;
	if (soma>8)
	{
		cout<<"media 10"<<endl;
	}
	else cout<<"media "<<soma<<endl;
	
	return 0;
}


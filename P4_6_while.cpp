#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float soma, val;
	int i;
	
	soma=0;
	i=0;
	
	while(i<20)
	{
		cout<<"digite um numero real "<<endl;
		cin>>val;
	    i=i+1;	
	    soma= soma+val;
	}
	soma= soma/i;
	if (soma>8)
	{
		cout<<"media 10"<<endl;
	}
	else cout<<"media "<<soma<<endl;
	
	return 0;
}


#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <locale>
using namespace std;

int main ()
{
	
	float A,B,C,y;
	
	cin>>A>>B>>C;
	 
    y = pow (B,2) -(4* A *C);
    
	
	if (y >0 && A!= 0)
	{
		cout<<fixed<<setprecision (5)<<"X1 = "<<(-1*B + sqrt(y))/ (2*A)<<endl;
		cout<<fixed<<setprecision(5) <<"X2 = "<<(-B - sqrt (y))/ (2*A)<<endl;
	}
	else 
	{
		cout<<"Impossivel"<<endl;
	}
	
	
	return 0;
}
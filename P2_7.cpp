#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   float c,a,r,v,pi;//comprimento,area,volume,raio,pi
   
   cout<<"insira o valor de r ";
   cin>>r;
   
   pi= 3.14;
   c= 2*pi*r;
   a= pi* pow(r,2);
   v= 4*pi*pow(r,3)/3;
   
   
   cout<<"comprimento "<<c<<endl;
   cout<<"area "<<a<<endl;
   cout<<"volume "<<v<<endl ;
   
	return 0;       
}
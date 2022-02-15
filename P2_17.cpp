#include <iostream>
#include <cmath>

   using namespace std;
   
   int main()
   {
	 float hrs,vm,L,km;// horas velocidade media, litros, kilometros 
	 
	 cout<<"digite as horas de viagem ";
	 cin>> hrs;
	 cout<< "insira a distancia em km ";
	 cin>> km;
	 
	 
	 vm = hrs * km;
	 L = vm/11;
	
	 cout<< "velocidade media  "<<vm<<" km/hora"<<endl;
	 cout<< "combustivel gasto "<<L<<" litros"<<endl;
	 cout<< "horas de viagem "<<hrs<<" hrs"<<endl;
	 
	 
	   
	   return 0;
   }
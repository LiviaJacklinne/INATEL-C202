#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <locale>

  using namespace std;

  int main(int argc, char** argv)
  {
	  
	  float l1,l2,a,pot;// lados do comodo,area e potência
	  
	  cout<<"insira em metros o valor do lado1  ";
	  cin>>l1;
	  cout<<"insira em metros o valor do lado2 ";
	  cin>>l2;
	  
	  a = l1*l2;
	  pot = a * 18;
	  
	  cout<< "a quantidade de potencia a ser utilizada e "<<pot<<"W"<<endl;
	  
	    
	  return 0;
  }
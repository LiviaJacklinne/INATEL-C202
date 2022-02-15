#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <locale>
  
  using namespace std;
  
  int main(int argc, char** argv)
  {
	 setlocale(LC_ALL, "PORTUGUESE");
	 
	  float sa,porcent,vf,aum; //salario atual, percentual de aumento
	  //aumento,valor final
	  
	  cout<< "insira o salario atual R$ ";
	  cin>> sa;
	  cout<< "insira o valor da porcentagem (%) ";
	  cin>> porcent;
	  
	  vf= sa +(sa*porcent/100);
	  aum= vf - sa;
	  cout<< "o salario atual é de R$ "<<vf<<endl;
	  cout<< "o aumento foi de R$ "<<aum<<endl;
	  
	  
	  
	  
	   
	  
	  return 0;
  }
  
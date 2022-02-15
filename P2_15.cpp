#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <locale>
  
  using namespace std;
  
  int main(int argc, char** argv)
  {
	 setlocale(LC_ALL, "PORTUGUESE");
 
	 float sb, grat,st; //salário base, gratificação, salario total
	 
	 cout<< "insira o salario atual R$ ";
	 cin>> sb;
	 
	 grat = sb + (sb*0.05);
	 st = grat - (grat * 0.07);
	 
	 cout<< "salário total R$ "<<st<<endl;
	 
	 
	 return 0;	 
  }
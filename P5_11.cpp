#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char resp[5];
	int mat, nota, i, k = 0, n;

	for(i = 0; i < 3; i++)
	{
		nota = 0, n = 0;
		for(int j=1; j<=5; j++)
		{
			cout << "Digite a resposta da questão " << j << " (a,b,c,d ou e): ";
			cin >> resp[j];
		}
		if (resp[1] == 'b')
			n++;
		if(resp[2] == 'a')
			n++;
		if(resp[3] == 'c')
			n++;
		if(resp[4] == 'c')
			n++;
		if(resp [5] == 'e')
			n++;
		nota = (n*100.0)/5;
		cout << "Digite sua matrícula: ";
		cin >> mat;
		if (nota > 35)
		{
			cout << "Matricula: " << mat <<endl<< "Nota: " << n<<endl;
			cout<<"Porcentagem de acerto: "<<nota<<"%"<<endl;
			cout << "Voce foi aprovado!" << endl;
			k++;
		}
		else
		{
			cout << "Matricula: " << mat<<endl << "Nota: " << n<<endl;
			cout<<"Porcentagem de acerto: "<<nota<<"%"<<endl;
			cout << "Você foi reprovado." << endl;
		}
	}
	cout << endl;
	cout <<fixed<<setprecision(2)<< "A porcentagem de alunos aprovados foi: "; 
	cout<< (k++ * 100.0) / i << "%" << endl;


	return 0;
}


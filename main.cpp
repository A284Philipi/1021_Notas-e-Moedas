#include<iostream>

using namespace std;

    int notas;
	double dinheiro;

int main()
{
	int notas = 0, dinheiro = 0;
	double dinheiro2 = 0, dinheiro3 = 0;
	cin >> dinheiro2;
	dinheiro = dinheiro2;
	cout << "NOTAS:" << endl;
	notas = dinheiro/100;
	cout << notas << " nota(s) de R$ 100.00" << endl;
	dinheiro = dinheiro - (notas * 100);
	dinheiro3 = dinheiro3 + (notas * 100);
	notas = dinheiro / 50;
	cout << notas << " nota(s) de R$ 50.00" << endl;
	dinheiro = dinheiro - (notas * 50);
	dinheiro3 = dinheiro3 + (notas * 50);
	notas = dinheiro / 20;
	cout << notas << " nota(s) de R$ 20.00" << endl;
	dinheiro = dinheiro - (notas * 20);
	dinheiro3 = dinheiro3 + (notas * 20);
	notas = dinheiro / 10;
	cout << notas << " nota(s) de R$ 10.00" << endl;
	dinheiro = dinheiro - (notas * 10);
	dinheiro3 = dinheiro3 + (notas * 10);
	notas = dinheiro / 5;
	cout << notas << " nota(s) de R$ 5.00" << endl;
	dinheiro = dinheiro - (notas * 5);
	dinheiro3 = dinheiro3 + (notas * 5);
	notas = dinheiro / 2;
	cout << notas << " nota(s) de R$ 2.00" << endl;
	dinheiro2 = dinheiro2 - (dinheiro3 + (notas * 2));
	cout << "MOEDAS:" << endl;
	notas = dinheiro2 / 1;
	dinheiro2 = dinheiro2 - (notas * 1);
	cout << notas << " moeda(s) de R$ 1.00" << endl;
    notas = dinheiro2 / 0.5;
    dinheiro2 = dinheiro2 - (notas * 0.5);
    cout << notas << " moeda(s) de R$ 0.50" << endl;
    notas = dinheiro2 / 0.25;
    dinheiro2 = dinheiro2 - (notas * 0.25);
    cout << notas << " moeda(s) de R$ 0.25" << endl;
    notas = dinheiro2 / 0.1;
    dinheiro2 = dinheiro2 - (notas * 0.1);
    cout << notas << " moeda(s) de R$ 0.10" << endl;
    notas = dinheiro2 / 0.05;
    dinheiro2 = dinheiro2 - (notas * 0.05);
    cout << notas << " moeda(s) de R$ 0.05" << endl;
    notas = dinheiro2 * 105;
    cout << notas << " moeda(s) de R$ 0.01" << endl;
 	return 0;
}

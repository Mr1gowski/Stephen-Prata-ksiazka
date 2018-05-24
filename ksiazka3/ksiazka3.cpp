#include"stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream &os, double fo, const double fe[], int n);
const int LIMIT = 5;




int main()
{
	ofstream fout;
	const char*fn = "ep_data.txt";
	fout.open(fn);
	if (!fout.is_open())
	{
		cout << "nie mozna otworzyc pliku!!!!!!!!!!!!!!!!";
		exit(EXIT_FAILURE);
	}

	double objective;
	cout << "podaj ogniskowa teleskopu: ";
	cin >> objective;
	double eps[LIMIT];
	cout << "podaj ogniskowe " << LIMIT << " okularow: ";

	for (int i = 0; i < LIMIT; i++)
	{
		cout << "/nwarosc nr." << i+1 << ": ";
		cin >> eps[i];

	}


	file_it(cout, objective, eps, LIMIT);
	file_it(fout, objective, eps, LIMIT);
	cin.get();
	return 0;
}


void file_it(ostream &os, double fo, const double fe[], int n)
{
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);
	os.precision(0);
	os << "ogniskowa obiektywu: " << fo << " mm\n ";
	os.precision(1);
	os.width(12);
	os << "f okularu:";
	os.width(15);
	os << "powiekszenie:" << endl;
	for (int i = 0; i < n; i++)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;
	}

	os.setf(initial);

}
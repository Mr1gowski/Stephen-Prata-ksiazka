#include <iostream>
#include <new>
const int BUFF = 512;
const int N = 5;
char buffer[BUFF];


int main()
{
	using namespace std;
	double *pd1, *pd2;
	int i;
	cout << "wywolanie zwyklego i miejscowego\n";
	pd1 = new double[N];
	pd2 = new (buffer) double[N];

	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20 * i;
	cout << "adres pamieci \nsterta" << pd1;
	cout << "pamiec statyczna " << (void*)buffer << endl;
	cout << "zawartosc pamieci \n";
	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " pod adresem " << &pd1[i] << "; ";
		cout << pd2[i] << " pod adresem " << &pd2[i] << endl;
	}

	cout << "\nDrugie wywolanie zwyklego i miejscowego new\n";
	double *pd3, *pd4;
	pd3 = new double[N];
	pd4 = new (buffer) double[N];
	for ( i = 0; i < N; i++)
	{
		pd4[i] = pd3[i] = 1000 + 40.0*i;

	}

	cout << "\nZawartosc pamieci\n";
	for ( i = 0; i < N; i++)
	{
		cout << pd3[i] << " pod adresem " << &pd3[i] << "; ";
		cout << pd4[i] << " pod adresem " << &pd4[i] << endl;

	}

	cout << "wywolanie zwyklego i miejscowego\n";
	pd1 = new double[N];
	pd2 = new (buffer+N *sizeof(double)) double[N];

	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 60.0 * i;
	cout << "adres pamieci \nsterta" << pd1;
	cout << "pamiec statyczna " << (void*)buffer << endl;
	cout << "zawartosc pamieci \n";
	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " pod adresem " << &pd1[i] << "; ";
		cout << pd2[i] << " pod adresem " << &pd2[i] << endl;
	}
	delete[] pd1;
	delete[] pd2;
	cin.get();
	return 0;
}



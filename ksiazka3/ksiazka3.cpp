#include"stdafx.h"
#include <iostream>
struct pudlo
{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};
float wyswietl(pudlo box)
{
	using namespace std;
	cout << box.producent<<endl;
	cout << box.dlugosc<<endl;
	cout << box.objetosc << endl;
	cout << box.szerokosc << endl;
	cout << box.wysokosc << endl;
}

float obliczobj(pudlo *box)
{
	box->objetosc =
		box->dlugosc*box->szerokosc*box->wysokosc;
}
int main()
{
	using namespace std;
	pudlo a;
	a.dlugosc = 21;
	a.objetosc = 100;
	a.producent = "samsung";
	a.wysokosc = 32;
	a.szerokosc = 43;
	wyswietl(a);
	obliczobj(&a);
	cin.get();

	return 0;

}

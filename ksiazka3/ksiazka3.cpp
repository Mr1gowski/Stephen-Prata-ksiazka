#include "stdafx.h"
#include <iostream>

using namespace std;
const int Arsize = 80;
unsigned long left(unsigned long num, unsigned ct);
char *left(const char*str, int n = 1);
int main()
{
	const char *trip = "Hawaii!!!";

	unsigned long n = 123456789;

	int i;
	char*temp;

	for (i = 0; i < 10; i++)
	{
		cout << left(n, i)<<endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete[] temp;
	}


	cin.get();
	return NULL;
}

unsigned long left(unsigned long num, unsigned ct)
{
	unsigned digits = 1;
	unsigned long n = num;
	if (ct == 0 || num == 0)
		return 0;
	while (n/=10)
		digits++;
	if (digits > ct)
	{
		ct = digits - ct;
		while (ct--)
			num /= 10;
		return num;
	}
	else
		return num;
	return 0;
}

char * left(const char * str, int n)
{
	if (n < 0)
		n = 0;
	char *p = new char[n + 1];
	int i;
	for ( i = 0; i < n&&str[i]; i++)
	{
		p[i] = str[i];
	}
	while (i<=n)
	{
		p[i++] = '\0';
	}
	return p;
}

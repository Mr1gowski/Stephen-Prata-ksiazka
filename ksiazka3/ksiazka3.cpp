#include"stdafx.h"
#include <iostream>
using namespace std;
double fill(double *tab, int n)
{
	double temp = 0;
	int i;
	for ( i = 0; i < n; i++)
	{
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			cout << "bledne dane";
			break;
		}
		tab[i] = temp;

	}

	
	return i;
}

double show(double *tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << tab[i]<<endl;
	}
	return 0;
}


double fills(double *tab, int n)
{
	double temp = 0;
	int j = 0;
	int g = n;
	for (int i = 0; i <=n; i++)
	{
		temp = tab[g-1];
		
		
		tab[g-1] = tab[i];
		tab[i] = temp;
	
		
		if (j == g)
			break;
		j++;
		g--;
	}
	return 0;
}



int main()
{
	const int a = 10;
	double taba[a];
	
	
	fill(taba, a);
	show(taba, a);
	fills(taba, a);
	show(taba, a);

	cout << "koniex";
	cin.get();



	return 0;

}

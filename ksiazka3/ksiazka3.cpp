#include"stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct free_throw
{
	string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throw & ft);
void setpp(free_throw & pt)
{
	if (pt.attempts != 0)
	{
		pt.percent = 100.0f*float(pt.made) / float(pt.attempts);
	}
	else pt.percent = 0;
}
free_throw &accumulate(free_throw &target, const free_throw & cource)
{
	target.attempts += cource.attempts;
	target.made += cource.made;
	setpp(target);
	return target;
}

int main()
{

	free_throw one = { "ifelsa branch", 13,14 };
	free_throw two = { "janusz treder", 10,16 };
	free_throw three = { "adam malysz", 20,1 };
	free_throw four = { "kamil stoch", 7,3 };
	free_throw five = { "patryk sienkiewicz", 8,32 };
	free_throw team = { "throwpussy", 0,0 };
	setpp(one);
	display(one);
	accumulate(team, one);
	display(team);

	free_throw dup;
	display(accumulate( team, five));
	accumulate(accumulate(team, three), four);
	display(team);


	dup = accumulate(team, five);
	cout << "statystyka dla team \n";
	display(team);
	cout << "statystyka dla dup po przypisaniu \n ";
	display(dup);
	setpp(four);

	accumulate(dup, five) = four;
	cout << "statystyka dla dup po omylkowym przypisaniu \n";
	display(dup);





	
	cin.get();
	return 0;
}

void display(const free_throw & ft)
{
	cout << "imie: " << ft.name << endl;
	cout << "trafionych: " << ft.made << endl;
	cout << " rzutow: " << ft.attempts << endl;
	cout << "skutecznosc: " << ft.percent << endl;
}

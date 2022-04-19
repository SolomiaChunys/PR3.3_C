#include <iostream>
#include <iomanip>
#include "Money.h"
#include <sstream>

using namespace std;

int main()
{
	Money n, m;
	cout << "Enter your FIRST sum:" << endl;
	cin >> n;
	cout <<"Enter your SECOND sum:" << endl;
	cin >> m;

	cout << "Division : " << Division(n, m) << endl;
	cout << "FracDivision: " << FracDivision(n, m) << endl;

	if (ComparisionGreat(n, m))
		cout << "FirstSum > SecondSum" << endl;
	if (ComparisionLess(n, m))
		cout << "FirstSum < SecondSum" << endl;
	if (ComparisionEqual(n, m))
		cout << "FirstSum = SecondSum" << endl;

	cout << "count = " << Money::Count() << endl;
	cout << "count = " << Object::Count() << endl;

	return 0;
}
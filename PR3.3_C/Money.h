#pragma once
#include <sstream>
#include <iostream>
#include "Object.h"

using namespace std;

class Money:
	public Object
{
private:
	int hrn500, hrn200, hrn100, hrn50, hrn20, hrn10, hrn5, hrn2, hrn1, kop50, kop25, kop10, kop5, kop2, kop1;
public:
	Money();
	Money(int hrn_500, int hrn_200, int hrn_100, int hrn_50, int hrn_20, int hrn_10, int hrn_5, int hrn_2, int hrn_1, int kop_50, int kop_25, int kop_10, int kop_5, int kop_2, int kop_1);
	Money(Money& t);
	~Money();

	int gethrn500() { return hrn500; }
	int gethrn200() { return hrn200; }
	int gethrn100() { return hrn100; }
	int gethrn50() { return hrn50; }
	int gethrn20() { return hrn20; }
	int gethrn10() { return hrn10; }
	int gethrn5() { return hrn5; }
	int gethrn2() { return hrn2; }
	int gethrn1() { return hrn1; }
	int getkop50() { return kop50; }
	int getkop25() { return kop25; }
	int getkop10() { return kop10; }
	int getkop5() { return kop5; }
	int getkop2() { return kop2; }
	int getkop1() { return kop1; }

	void sethrn500(int value) { hrn500 = value; }
	void sethrn200(int value) { hrn200 = value; }
	void sethrn100(int value) { hrn100 = value; }
	void sethrn50(int value) { hrn50 = value; }
	void sethrn20(int value) { hrn20 = value; }
	void sethrn10(int value) { hrn10 = value; }
	void sethrn5(int value) { hrn5 = value; }
	void sethrn2(int value) { hrn2 = value; }
	void sethrn1(int value) { hrn1 = value; }
	void setkop50(int value) { kop50 = value; }
	void setkop25(int value) { kop25 = value; }
	void setkop10(int value) { kop10 = value; }
	void setkop5(int value) { kop5 = value; }
	void setkop2(int value) { kop2 = value; }
	void setkop1(int value) { kop1 = value; }

	operator string() const;

	friend ostream& operator << (ostream&, const Money&);
	friend istream& operator >>(istream&, Money&);

	double sum();
	friend double Division(Money& n, Money& m);
	friend double FracDivision(Money& n, Money& m);
	friend bool ComparisionGreat(Money& n, Money& m);
	friend bool ComparisionLess(Money& n, Money& m);
	friend bool ComparisionEqual(Money& n, Money& m);
};


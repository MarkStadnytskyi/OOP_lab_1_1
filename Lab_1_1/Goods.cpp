#include "Goods.h"
#include <iostream>

using namespace std;

double Goods::GetFirst() const
{
	return first;
}

int Goods::GetSecond() const
{
	return second;
}

bool Goods::SetFirst(double value)
{
	if (value >= 0)
	{
		first = value;
		return true;
	}
	else
	{
		first = 0;
		return false;
	}
}

bool Goods::SetSecond(double value)
{
	if (value >= 0)
	{
		second = value;
		return true;
	}
	else
	{
		second = 0;
		return false;
	}
}

bool Goods::Init(double f, int s)
{

	if (SetFirst(f) && SetSecond(s))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Goods::Read()
{
	double f;
	int s;

	do
	{
		cout << "first  = ? "; cin >> f;
		cout << "second = ? "; cin >> s;
	} while (!Init(f, s));

}

void Goods::Display()
{
	cout << "first  = " << first << endl;
	cout << "second = " << second << endl;
}

double Goods::cost()
{
	return first * second;
}
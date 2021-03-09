#include <iostream>
#include "Goods.h"

using namespace std;

Goods makeGoods(double f, int s)
{
	Goods g;
	if (!g.Init(f, s)) {
		cout << "Error" << endl;
		exit(0);
	}

	return g;
}

int main()
{
	Goods g;

	g.Read();
	g.Display();

	cout << "cost = " << g.cost() << endl;
	cout << endl;

	return 0;
}

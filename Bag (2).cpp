#include "Bag.h"
#include <iostream>
using namespace std;
Bag::Bag()
{
	name = " ";
	count = 0;
	items = new string[0];
}
Bag::Bag(string n, int c, string* in)
{
	name = n;
	count = c;
	items = in;
}
int Bag::getCount() const
{
	return count;
}
void Bag::displayAll()
{
	for (int i = 0; i < count; i++)
	{
		cout << items[i] << endl;
	}
}
void Bag::search(string in)
{
	if (in.size() < 3)
	{
		displayAll();
	}
	else
	{
		for (int i = 0; i < count; i++)
		{
			string substring = items[i].substr(0, in.size());
			if (substring == in)
				cout << items[i] << endl;
		}
	}
}
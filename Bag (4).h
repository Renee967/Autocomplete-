#ifndef BAG_H
#define BAG_H
#include <string>
using namespace std;
class Bag
{
private:
	string name;
	string* items;
	int count;
public:
	Bag();
	Bag(string n, int c, string* in);
	int getCount() const;
	void displayAll();
	void search(string in);
};

#endif


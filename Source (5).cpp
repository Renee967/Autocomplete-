#include<conio.h>
#include <iostream>
#include "Bag.h"
#include <fstream>
#include <string>

using namespace std;
int main() {
	ifstream infile("input.txt");
	char ch = ' ';
	string input;

	int count = 0;
	while (getline(infile, input))
	{
		count++;
	}
	infile.close();

	infile.open("input.txt");
	string* source = new string[count];
	int i = 0;
	while (getline(infile, input))
	{
		source[i] = input;
		i++;
	}
	string in;
	Bag bag1("My Bag", count, source);
	while (1) {

		if (_kbhit()) {
			system("CLS"); //clear screen
			ch = _getch();
			in.push_back(ch);
			if (ch == '\b') //backspace clears the search
				in.clear();


			//cout << ch << " was pressed" << endl;
			cout << in << endl;
			bag1.search(in);
		}
	}

}
#include <iostream>
#include <string>
#include "functions.h"


using namespace std;

int menu()
{
	int choice;
	cout << "Menu options" << endl;
	cout << "1. Blastoff" << endl;
	cout << "2. Concat Strings" << endl;
	cout << "3. Exit" << endl;
	cin >> choice;
	return choice;

}


void blastoff()
{
	for (int i = 10; i > 0; i--)// i-- -> i -i -1
	{
		cout << "warning - time left = " << i << endl;
	}
}
void addstr(string str1, string str2)
{
	string str3 = str1 + str2;
	cout << "concat str = " str3 << endl;
}

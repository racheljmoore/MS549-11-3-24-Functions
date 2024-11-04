#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

int main() {
	int option = menu();
	//	cout << "you chose" << "more text" << endl;"
	if (option == 1)
	{
		blastoff();
	}
	else if (option == 2)
	{
		addstr("Jill ", "Coddington");
	}
}

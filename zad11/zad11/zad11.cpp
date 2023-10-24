#include <iostream>
using namespace std;

int main()
{
	for (int wiersz = 0; wiersz < 4; wiersz++)
	{
		for (int kolumna = 0; kolumna < 5; kolumna++) {
			cout << "* ";
		}
		cout << "\n";
	}

    return 0;
}
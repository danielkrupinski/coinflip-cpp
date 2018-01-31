#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "Coinflip simulator\n\v";
	cout << "Enter amount of flips: ";
	int amount {0};
	cin >> amount;
	for (int i=0; i!=amount; ++i)
		rand() % 2 == 0 ? cout << 1 << endl : cout << 2 << endl;
	cin.ignore();
	getchar();
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	cout << "Coinflip simulator\n\v";
	cout << "Enter amount of flips: ";
	int amount {0};
	cin >> amount;
	srand(time(NULL));
	system("clear");
	int amount_1 {0};
	for (int i=0; i!=amount; ++i)
		if (rand() % 2 == 0)
			++amount_1;
	cout << "Results:\n\v";
	cout << amount_1 << " heads and " << amount-amount_1 << " tails of total " << amount << " flips.";
	cin.ignore();
	getchar();
	return 0;
}

#include "../include/functions.h"

using namespace std;

data setup()
{
	data Data;
	cout << "Coinflip simulator\n\v";
	cout << "Enter amount of flips: ";
	cin >> Data.amount;
	return Data;
}

void generate(data& Data)
{
	srand(time(NULL));
	for (int i=0; i!=Data.amount; ++i)
	{
		Data.random.push_back(rand());
		if (Data.random[i] % 2 == 0)
			++Data.heads;
	}

}

void results(data& Data)
{
	system("clear");
	cout << "Results have been saved in [filename]"; // filestream will be added
}


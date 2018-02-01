#include "../include/functions.h"

using namespace std;

data setup()
{
	data Data;
	cout << "Coinflip simulator\n\v";
	cout << "Enter amount of flips: ";
	cin >> Data.amount;
	cout << "Select mode:\n" << "1. Output results on screen.\n" << "2. Output detailed results on screen.\n" << "3. Output detailed results to file.\n";
	cin >> Data.mode;
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
	if (Data.mode != 3)
	{
	cout << "Results:\n\v";
	cout << Data.heads << " heads and " << Data.amount-Data.heads << " tails of total " << Data.amount << " flips.";
	cout << endl;
	if (Data.mode == 2)
		for (int i=0; i!=Data.random.size(); ++i)
			Data.random[i] % 2 == 0 ? cout << "heads\n" : cout << "tails\n";
	}
	else cout << "File output not supported yet.\n";
}

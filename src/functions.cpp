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
		rand() % 2 == 0 ? Data.random.push_back(0) : Data.random.push_back(1);
		if (Data.random[i] % 2 == 0)
			++Data.heads;
	}

}

void results(data& Data)
{
	remove("results.txt");
	ofstream file;
	file.open("results.txt");
	file << "0 - heads, 1 - tails\n\n";
	for (int i=0; i!=Data.random.size(); ++i)
		file << Data.random[i] << endl;
	file.close();
	cout << "Results have been saved in results.txt file.\n";
}


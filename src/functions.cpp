#include "../include/functions.h"

using namespace std;

data setup()
{
    data Data;
    cout << "Coin Flip Simulation\n\v";
    cout << "Enter amount of flips: ";
    cin >> Data.amount;
    return Data;
}

void generate(data& Data)
{
    srand(time(NULL));
    for (int i=0; i!=Data.amount; ++i)
    {
        if (int random {rand()%2})
        Data.random.push_back(1);
        else
        {
            Data.random.push_back(0);
            ++Data.heads;
        }
    }

}

void results(const data& Data)
{
    remove("results.txt");
    ofstream file;
    file.open("results.txt");
    file << Data.heads << " heads and " << Data.amount-Data.heads << " tails of total " << Data.amount << " flips.\n";
    file << "0 - heads, 1 - tails\n\n";
    for (auto& x : Data.random)
    file << x << ',';
    file.close();
    cout << "Results have been saved in results.txt file.\n";
}

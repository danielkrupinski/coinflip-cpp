#include "../include/coinflip.h"

using namespace std;

Data::Data()
{
    cout << "Coin Flip Simulation\n\n";
    cout << "Enter amount of flips: ";
    cin >> amount;
}

void Data::generate(Data& data)
{
    srand(time(NULL));
    for (int i=0; i!=this->amount; ++i)
        if (int random {rand()%2})
            this->random.push_back(1);
        else
        {
            this->random.push_back(0);
            ++this->heads;
        }
}

void results(const Data& data)
{
    remove("results.txt");
    ofstream file;
    file.open("results.txt");
    file << data.heads << " heads and " << data.amount-data.heads << " tails of total " << data.amount << " flips.\n";
    file << "0 - heads, 1 - tails\n\n";
    for (auto& x : data.random)
        file << x << ',';
    file.close();
    cout << "Results have been saved in results.txt file.\n";
}

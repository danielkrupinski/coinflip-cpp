#include "../include/coinflip.h"
#include <fstream>
#include <iostream>

using namespace std;

Data::Data()
{
    cout << "Coin Flip Simulation\n\n";
    cout << "Enter amount of flips: ";
    cin >> amount;
}

void Data::generate()
{
    srand(time(NULL));
    for (int i=0; i!=this->amount; ++i)
        if (int random {rand()%2})
            this->random.push_back(1);
        else {
            this->random.push_back(0);
            ++this->heads;
        }
}

void Data::results()
{
    remove("results.txt");
    ofstream file;
    file.open("results.txt");
    file << this->heads << " heads and " << this->amount-this->heads << " tails of total " << this->amount << " flips.\n";
    file << "0 - heads, 1 - tails\n\n";
    for (auto& x : this->random)
        file << x << ',';
    file.close();
    cout << "Results have been saved in results.txt file.\n";
}

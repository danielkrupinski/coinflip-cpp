#include <iostream>
#include <vector>
#include <fstream>

struct data {
    int amount {0};
    int heads {0};
    std::vector<int> random;
};

data setup();

void generate(data&);

void results(const data&);

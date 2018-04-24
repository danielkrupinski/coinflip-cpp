#include <iostream>
#include <vector>
#include <fstream>

struct data {
    data();
    int amount {0};
    int heads {0};
    std::vector<int> random;
};

void generate(data&);

void results(const data&);

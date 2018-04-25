#include <iostream>
#include <vector>
#include <fstream>

struct Data {
    Data();
    int amount {0};
    int heads {0};
    std::vector<int> random;
    void generate(Data&);
};

void generate(Data&);

void results(const Data&);

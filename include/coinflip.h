#include <iostream>
#include <vector>
#include <fstream>

struct data {int amount {}, heads {}; std::vector<int> random;};

data setup();

void generate(data&);

void results(const data&);

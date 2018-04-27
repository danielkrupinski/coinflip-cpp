#include <iostream>
#include <vector>
#include <fstream>

class Data {
public:
    Data();
    void generate();
    void results();
private:
    int amount {0};
    int heads {0};
    std::vector<int> random;
};

#include "../include/coinflip.h"

using namespace std;

int main()
{
    data Data = setup();
    generate(Data);
    results(Data);
    return 0;
}

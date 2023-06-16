#include <random>
#include "random.h"

//haha yes
int RNG(int min, int max)
{
    static std::random_device rd;
    static std::mt19937 engine(rd());
    std::uniform_int_distribution<int> dist(min, max);
    return dist(engine);
}

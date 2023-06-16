#include <iostream>
#include "random.h"

//random class
class foo 
{
    public:
        static void do_stuff()
        {
            std::cout << "Did something haha " << RNG(1, 6) << std::endl;
        }
};


int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "Random num : " << RNG(3, 9) << std::endl;
    foo().do_stuff();
    return 0;
}
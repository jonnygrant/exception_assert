// g++ -O2 -Wall -o main main.cpp
#include <iostream>

#include "exception_assert.hpp"

int main()
{
    const char * str = nullptr;
    try
    {
        exception_assert(str, "check pointer");
    }
    catch(std::logic_error & e)
    {
        std::cout << "Caught std::logic_error: '" << e.what() << "'\n";
    }
}

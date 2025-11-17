#include "functions.hpp"
#include <iostream>

int main()
{
    Base *p;

    std::cout << "--- Testing identify(Base* p) ---" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        p = generate();
        identify(p);
        delete p;
    }

    std::cout << "\n--- Testing identify(Base& p) ---" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        p = generate();
        identify(*p);
        delete p;
    }

    return 0;
}
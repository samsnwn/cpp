#include "functions.hpp"

Base * generate(void)
{
    srand(time(NULL));
    int randomValue = rand() % 3;

    if (randomValue == 0)
    {
        std::cout << "Generated A" << std::endl;
        return new A();
    }
    else if (randomValue == 1)
    {
        std::cout << "Generated B" << std::endl;
        return new B();
    }
    else
    {
        std::cout << "Generated C" << std::endl;
        return new C();
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "C" << std::endl;
    }
    else
    {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::bad_cast& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch (const std::bad_cast& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch (const std::bad_cast& e)
            {
                std::cout << "Unknown type" << std::endl;
            }
        }
    }
}
#include "Span.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
    // Test with std::vector
    std::cout << "--- Testing with std::vector ---" << std::endl;
    try
    {
        Span<std::vector<int> > sp = Span<std::vector<int> >(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Numbers in Span: ";
        for (std::vector<int>::iterator it = sp.getContainer().begin(); it != sp.getContainer().end(); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        // std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- Testing MaxSizeReachedException ---" << std::endl;
    try
    {
        Span<std::vector<int> > sp = Span<std::vector<int> >(3);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4); // This should throw MaxSizeReachedException
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- Testing NoSpanPossibleException ---" << std::endl;
    try
    {
        Span<std::vector<int> > sp = Span<std::vector<int> >(3);
        sp.addNumber(1);
        std::cout << "Shortest Span (should throw): " << sp.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- Testing with a larger Span ---" << std::endl;
    try
    {
        Span<std::vector<int> > bigSpan = Span<std::vector<int> >(10000);
        for (int i = 0; i < 10000; ++i)
        {
            bigSpan.addNumber(i);
        }
        std::cout << "Shortest Span (large): " << bigSpan.shortestSpan() << std::endl;
        // std::cout << "Longest Span (large): " << bigSpan.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test with std::list (if Span supports it)
    std::cout << "\n--- Testing with std::list ---" << std::endl;
    try
    {
        Span<std::list<int> > listSpan = Span<std::list<int> >(5);
        listSpan.addNumber(10);
        listSpan.addNumber(2);
        listSpan.addNumber(20);
        listSpan.addNumber(5);
        listSpan.addNumber(15);

        std::cout << "Numbers in Span (list): ";
        for (std::list<int>::iterator it = listSpan.getContainer().begin(); it != listSpan.getContainer().end(); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        std::cout << "Shortest Span (list): " << listSpan.shortestSpan() << std::endl;
        // std::cout << "Longest Span (list): " << listSpan.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test with std::deque (if Span supports it)
    std::cout << "\n--- Testing with std::deque ---" << std::endl;
    try
    {
        Span<std::deque<int> > dequeSpan = Span<std::deque<int> >(5);
        dequeSpan.addNumber(100);
        dequeSpan.addNumber(10);
        dequeSpan.addNumber(50);
        dequeSpan.addNumber(20);
        dequeSpan.addNumber(80);

        std::cout << "Numbers in Span (deque): ";
        for (std::deque<int>::iterator it = dequeSpan.getContainer().begin(); it != dequeSpan.getContainer().end(); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        std::cout << "Shortest Span (deque): " << dequeSpan.shortestSpan() << std::endl;
        // std::cout << "Longest Span (deque): " << dequeSpan.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
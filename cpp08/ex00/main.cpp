#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>

template <typename T>
void test_container(const std::string& name, T& container, int value_to_find) {
    std::cout << "--- Testing " << name << " ---" << std::endl;
    std::cout << "Container elements: ";
    for (typename T::const_iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    try {
        typename T::const_iterator it = easyfind(container, value_to_find);
        std::cout << "Found " << *it << " in " << name << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    // Test with std::vector
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    test_container("std::vector", vec, 3);
    test_container("std::vector", vec, 6);

    // Test with std::list
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);
    test_container("std::list", lst, 20);
    test_container("std::list", lst, 60);

    // Test with std::deque
    std::deque<int> deq;
    deq.push_back(100);
    deq.push_back(200);
    deq.push_back(300);
    deq.push_back(400);
    deq.push_back(500);
    test_container("std::deque", deq, 400);
    test_container("std::deque", deq, 600);

    return 0;
}
#include <iostream>

#include <CoffeeBean/Version.hpp>

int main() {
    std::cout << "Coffee Bean " << cb::version() << std::endl;

    return 0;
}
#include <iostream>
#include "person.hpp"

int main() {
    person p("Hien Nguyen");
    std::cout << "Hello, " << p.name() << std::endl;

    return 0;
}

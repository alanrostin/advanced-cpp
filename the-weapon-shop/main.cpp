#include <iostream>
#include "lib/Character.h"

int main() {
    Character first;
    Character second("Phil", "Morphy", "Gotcha go there!");

    std::cout << second.Introduce() << std::endl;
    second.print();

    return 0;
}

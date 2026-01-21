#include "PmergeMe.h"
#include <iostream>

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    try {
        PmergeMe pm(av);
        pm.process();
    } catch (...) {
        std::cerr << "Error" << std::endl;
    }
    return 0;
}

#include "PmergeMe.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

void PmergeMe::binaryInsertVector(std::vector<int>& v, int value) {
    int left = 0;
    int right = v.size();

    while (left < right) {
        int mid = (left + right) / 2;
        if (value < v[mid])
            right = mid;
        else
            left = mid + 1;
    }
    v.insert(v.begin() + left, value);
}


void PmergeMe::fordJohnsonVector(std::vector<int>& v) {
    if (v.size() <= 1)
        return;

    std::vector<int> main;
    std::vector<int> pend;

    for (size_t i = 0; i + 1 < v.size(); i += 2) {
        int a = v[i];
        int b = v[i + 1];

        if (a > b)
            std::swap(a, b);

        pend.push_back(a);
        main.push_back(b);
    }

    if (v.size() % 2)
        pend.push_back(v.back());

    fordJohnsonVector(main);

    for (size_t i = 0; i < pend.size(); i++)
        binaryInsertVector(main, pend[i]);

    v = main;
}


void PmergeMe::binaryInsertDeque(std::deque<int>& d, int value) {
    int left = 0;
    int right = d.size();

    while (left < right) {
        int mid = (left + right) / 2;
        if (value < d[mid])
            right = mid;
        else
            left = mid + 1;
    }
    d.insert(d.begin() + left, value);
}


void PmergeMe::fordJohnsonDeque(std::deque<int>& d) {
    if (d.size() <= 1)
        return;

    std::deque<int> main;
    std::deque<int> pend;

    for (size_t i = 0; i + 1 < d.size(); i += 2) {
        int a = d[i];
        int b = d[i + 1];

        if (a > b)
            std::swap(a, b);

        pend.push_back(a);
        main.push_back(b);
    }

    if (d.size() % 2)
        pend.push_back(d.back());

    fordJohnsonDeque(main);

    for (size_t i = 0; i < pend.size(); i++)
        binaryInsertDeque(main, pend[i]);

    d = main;
}


void PmergeMe::process() {
    clock_t start, end;

    std::cout << "Before: ";
    for (size_t i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;

    start = clock();
    fordJohnsonVector(_vec);
    end = clock();

    double timeVec = (double)(end - start) / CLOCKS_PER_SEC * 1000000;

    start = clock();
    fordJohnsonDeque(_deq);
    end = clock();

    double timeDeq = (double)(end - start) / CLOCKS_PER_SEC * 1000000;

    std::cout << "After: ";
    for (size_t i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;

    std::cout << "Time with vector : " << timeVec << " us" << std::endl;
    std::cout << "Time with deque  : " << timeDeq << " us" << std::endl;
}



PmergeMe::PmergeMe(char **av) {
    for (int i = 1; av[i]; i++) {
        char *end;
        long n = std::strtol(av[i], &end, 10);

        if (*end != '\0' || n < 0)
            throw std::runtime_error("Error");

        _vec.push_back(n);
        _deq.push_back(n);
    }
}

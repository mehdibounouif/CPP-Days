#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>

class PmergeMe {
private:
    std::vector<int> _vec;
    std::deque<int>  _deq;

    void fordJohnsonVector(std::vector<int>& v);
    void fordJohnsonDeque(std::deque<int>& d);

    void binaryInsertVector(std::vector<int>& v, int value);
    void binaryInsertDeque(std::deque<int>& d, int value);

public:
    PmergeMe(char **av);
    void process();
};

#endif

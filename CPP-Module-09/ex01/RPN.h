#ifndef _RPN_
#define _RPN_

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cstdlib>

class RPN
{
  private:
    std::stack<int> _stack;

    bool isNumber(const std::string &token);
    bool isOperator(const std::string &token);
    int  calculate(int a, int b, char op);

  public:
    RPN();
    ~RPN();

    void evaluate(const std::string &expression);
    int  getResult() const;
};

#endif

#include "RPN.h"

RPN::RPN() {}
RPN::~RPN() {}

bool RPN::isNumber(const std::string &token)
{
  int number;
  char extra;
  std::stringstream ss(token);

  if (!(ss >> number) || (ss >> extra))
    return false;
  return true;
}
bool RPN::isOperator(const std::string &token)
{
  return (token.size() == 1 &&
         (token == "+" || token == "-" ||
          token == "*" || token == "/"));
}
int RPN::calculate(int a, int b, char op)
{
  if (op == '+') return a + b;
  if (op == '-') return a - b;
  if (op == '*') return a * b;
  if (op == '/') return a / b;
  return 0;
}
void RPN::evaluate(const std::string &expression)
{
  std::stringstream ss(expression);
  std::string token;

  while (ss >> token)
  {
    if (isNumber(token))
    {
      _stack.push(std::atoi(token.c_str()));
    }
    else if (isOperator(token))
    {
      if (_stack.size() < 2)
        throw std::runtime_error("Error");

      int b = _stack.top(); _stack.pop();
      int a = _stack.top(); _stack.pop();

      int result = calculate(a, b, token[0]);
      _stack.push(result);
    }
    else
    {
      throw std::runtime_error("Error");
    }
  }

  if (_stack.size() != 1)
    throw std::runtime_error("Error");
}
int RPN::getResult() const
{
  return _stack.top();
}

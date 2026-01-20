#include "RPN.h"
#include <list>
#include <sstream>
#include <vector>
#include <stdlib.h>

bool check_number(std::string &token)
{
    int number;
    char character;
    std::stringstream ss(token);
    if (!(ss >> number) || (ss >> character))
        return (false);
    return (true);
}

bool check_sign(std::string &token)
{
  if (token.size() == 1
      && (token == "-" || token == "+"
      || token == "*" || token == "/"))
    return (true);
  return (false);
}

int calc(int num1, int num2, char sing)
{
  if (sing == '-')
    return (num1 - num2);
  else if (sing == '+')
    return (num1 + num2);
  else if (sing == '*')
    return (num1 * num2);
  else
    return (num1 / num2);
}

int main(int c, char **v)
{
  if (c != 2)
    std::cout << "Invalid input!" <<std::endl;
  else 
  {
    std::string a(v[1]);
    std::vector<std::string> tokens;
    std::string token;
    std::stack<int> b;

    std::stringstream ss(a);
    while (ss >> token)
      tokens.push_back(token);

    std::vector<std::string>::iterator it = tokens.begin();
    while (it != tokens.end())
    {
      if (check_number(*it))
        b.push(std::atoi((*it).c_str()));
      else if (check_sign(*it))
      {
        if (b.size() != 2)
        {
          std::cerr << "Invalid input!" << std::endl;
          return (false);
        }
        int num2 = b.top();
        b.pop();
        int num1 = b.top();
        b.pop();
        int result = calc(num1, num2, (*it).c_str()[0]);
        b.push(result);
      }
      else
      { 
        std::cout << "Invalid input" << std::endl;
        return (1);
      }
      ++it;
    }
    if (b.size() != 1)
      std::cout << "Invalid input" << std::endl;
    else
      std::cout << b.top() << std::endl;

  }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:34:26 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/16 09:28:01 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"
#include "Bureaucrat.h"

int main() {
  try {
    Form a("A", 50, 20); // OK
  } catch (std::exception &e) {
    std::cout << "Exception : " << e.what() << std::endl;
  }

  try {
    Form b("B", 1, 1); // OK
  } catch (std::exception &e) {
    std::cout << "Exception : " << e.what() << std::endl;
  }

  std::cout << "=====================\n";
  try {
    Form c("C", 0, 20); // should throw
  } catch (std::exception &e) {
    std::cout << "Exception : " << e.what() << std::endl;
  }

  std::cout << "=====================\n";
  try {
    Form d("D", 151, 20); // should throw
  } catch (std::exception &e) {
    std::cout << "Exception : " << e.what() << std::endl;
  }

  std::cout << "=====================\n";
  Bureaucrat bob("Bob", 40);
  Form f("F", 50, 10);
  bob.signForm(f); // OK

  std::cout << f << std::endl;
  std::cout << "=====================\n";
  Bureaucrat jim("Jim", 140);
  Form g("G", 50, 10);
  jim.signForm(g); // FAIL
  std::cout << g << std::endl;
}

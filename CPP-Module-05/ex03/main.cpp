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
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include <cstdlib>
#include <ctime>

int main() {
  std::srand(std::time(NULL));
  const std::string b = "mehdi";

  //  AForm *f = new RobotomyRequestForm(b);
  AForm *a = new ShrubberyCreationForm(b);
  //  AForm *m = new PresidentialPardonForm(b);

  Bureaucrat alice("hello", 40);

  alice.signForm(*a);
  alice.executeForm(*a);
}

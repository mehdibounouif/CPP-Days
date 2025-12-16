/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:25:43 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/13 09:08:32 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_
#define _BUREAUCRAT_

#include <iostream>

class AForm;

class Bureaucrat {
  const std::string name;
  int grade;

public:
  Bureaucrat();
  Bureaucrat(const std::string name, int grade);
  Bureaucrat(const Bureaucrat &obj);
  Bureaucrat &operator=(const Bureaucrat &obj);
  const std::string getName() const;
  int getGrade() const;
  void increment();
  void decrement();
  class GradeTooHighException : public std::exception {
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
    const char *what() const throw();
  };
  void signForm(AForm &obj);
  void executeForm(AForm const &form) const;
  ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif

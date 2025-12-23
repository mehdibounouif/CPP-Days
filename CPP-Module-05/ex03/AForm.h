/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 08:17:29 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/14 09:38:41 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_
#define _FORM_

#include "Bureaucrat.h"
#include <exception>
#include <iostream>

class AForm {
  const std::string name;
  bool isSigned;
  const int gradeToSign;
  const int gradeToExecute;

public:
  AForm();
  AForm(const std::string name, const int toSign, const int toExecute);
  AForm(const AForm &obj);
  const std::string getName() const;
  bool getSigned() const;
  void setSigned(bool flag);
  int getGradeToSign() const;
  int getGradeToExecute() const;
  void beSigned(Bureaucrat &obj);

  void execute(Bureaucrat const &executor) const;
  virtual void executeAction() const = 0;
  class FormNotSignedException : public std::exception {
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
    const char *what() const throw();
  };
  class GradeTooHighException : public std::exception {
    const char *what() const throw();
  };
  virtual ~AForm();
};
std::ostream &operator<<(std::ostream &os, const AForm &obj);
#endif

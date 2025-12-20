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
#include "Intern.h"

int main() {
  Intern a;
  AForm *b;

  Bureaucrat c("mehdi", 1);

  b = a.makeForm("Pridential pardon", "hmida");
  if (!b)
    return (1);
  c.signForm(*b);
  c.executeForm(*b);
}

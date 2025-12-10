/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:15:53 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/10 08:54:54 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_
#define _BUREAUCRAT_

#include <iostream>

class	Bureaucrat
{
	const std::string	name;
	int	grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator=(const Bureaucrat &obj);
		std::string getName() const;
		int	getGrade() const;
		void	increment();
		void	decrement();
		class	GradeTooHighException : public std::exception
		{
			const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			const char	*what() const throw();
		};
		~Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif

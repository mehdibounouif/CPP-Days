/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:15:53 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/09 21:08:03 by mbounoui         ###   ########.fr       */
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
		~Bureaucrat();
		std::string getName() const;
		int	getGade() const;
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
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif

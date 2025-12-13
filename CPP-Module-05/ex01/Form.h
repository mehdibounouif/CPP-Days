/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 08:17:29 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/13 09:41:23 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_
#define	_FORM_

#include <iostream>
#include "Bureaucrat.h"

class	Form
{
	const		std::string name;
	bool		isSigned;
	const int	gradeToSign;
	const int	gradeToExecute;
	public:
		Form(const std::string name, const int toSign, const int toExecute);
		const std::string	getName() const;
		bool				getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void				beSigned(Bureaucrat &obj);
		class	GradeTooLowException : public std::exception
		{
			const	char *what() const throw();
		};
		class	GradeTooHighException : public std::exception
		{
			const	char *what() const throw();
		};
		~Form();
};
#endif

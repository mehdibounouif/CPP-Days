/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:34:26 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/12 19:10:52 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int	main()
{
	try {
		Bureaucrat a("mehdi", 10);
		std::cout << a << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}
	std::cout << "\n============================\n";
	try {
		Bureaucrat b("taha", 0);
		std::cout << b << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

	std::cout << "\n============================\n";
	try{
		Bureaucrat a("marwan", 151);
		std::cout << a << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

	std::cout << "\n============================\n";
	try {
		Bureaucrat a("tarik", 2);
		std::cout << "tarik before increment " << a.getGrade() << std::endl;
		a.increment();
		std::cout << "tarik after increment " << a.getGrade() << std::endl;
		a.increment();
	} catch (std::exception &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

	std::cout << "\n============================\n";
	try {
		Bureaucrat a("salah", 149);
		std::cout << "salah before decrement " << a.getGrade() << std::endl;
		a.decrement();
		std::cout << "salah after decrement " << a.getGrade() << std::endl;
		a.decrement();
	} catch (std::exception &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

}

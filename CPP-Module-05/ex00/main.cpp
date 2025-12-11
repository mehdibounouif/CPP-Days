/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:28:20 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/11 09:15:39 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int	main()
{
	std::cout << "\n===========================\n";
	try {
		Bureaucrat a("Mehdi", 10);
		std::cout << a << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n===========================\n";
	try {
		Bureaucrat b("Tarik", 0);
		std::cout << b << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n===========================\n";
	try {
		Bureaucrat c("Marwan", 151);
		std::cout << c << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n===========================\n";
	try {
		Bureaucrat d("Hassan", 2);
		std::cout << d << std::endl;
		d.increment();
		std::cout << "After increment: " << d << std::endl;
		d.increment();
		std::cout << "After second increment: " << d << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}


	std::cout << "\n===========================\n";
	try {
		Bureaucrat e("Youssef", 149);
		std::cout << e << std::endl;
		e.decrement();  // 149 -> 150 (worse)
		std::cout << "After decrement: " << e << std::endl;
		e.decrement();  // 150 -> should throw exception
		std::cout << "After second decrement: " << e << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n===========================\n";
	try {
		Bureaucrat f("Ahmed", 75);
		std::cout << f << std::endl;
		Bureaucrat g(f);
		std::cout << g << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}


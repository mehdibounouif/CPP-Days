/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:57:44 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/19 22:14:41 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <exception>

class BitcoinExchange {
	private:
		std::map<std::string, double> _prices;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void processInput(const char *file);

	private:
		void loadDatabase();
		double getExchangeRate(const std::string &date) const;
		bool isValidDate(const std::string &date) const;
		bool isValidValue(double value) const;

		/* Exceptions */
		class FileError : public std::exception {
			public:
				const char *what() const throw();
		};

		class BadInput : public std::exception {
			public:
				const char *what() const throw();
		};

		class NotPositive : public std::exception {
			public:
				const char *what() const throw();
		};

		class TooLarge : public std::exception {
			public:
				const char *what() const throw();
		};
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:25:07 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/24 15:03:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>


const char *BitcoinExchange::FileError::what() const throw() {
	return "Error: could not open file.";
}

const char *BitcoinExchange::BadInput::what() const throw() {
	return "Error: bad input.";
}

const char *BitcoinExchange::NotPositive::what() const throw() {
	return "Error: not a positive number.";
}

const char *BitcoinExchange::TooLarge::what() const throw() {
	return "Error: too large a number.";
}


BitcoinExchange::BitcoinExchange() {
	loadDatabase();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	_prices = other._prices;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other)
		_prices = other._prices;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}


void BitcoinExchange::loadDatabase() {
	std::ifstream file("data.csv");
	if (!file.is_open())
		throw FileError();

	std::string line;
	std::getline(file, line); // skip header

	while (std::getline(file, line)) {
    size_t coma = line.find(",");
    if (coma == std::string::npos)
      throw BadInput();
		std::string date = line.substr(0, coma);
		double price = std::atof(line.substr(coma + 1).c_str());
		_prices[date] = price;
	}
}


double BitcoinExchange::getExchangeRate(const std::string &date) const {
	std::map<std::string, double>::const_iterator it;

	it = _prices.lower_bound(date);

	if (it != _prices.end() && it->first == date)
		return it->second;

	if (it == _prices.begin())
		throw BadInput();

	--it;
	return it->second;
}


void BitcoinExchange::processInput(const char *file) {
	std::ifstream input(file);
	if (!input.is_open())
		throw FileError();

	std::string line;
	std::getline(input, line);

	if (line != "date | value")
		throw BadInput();

	while (std::getline(input, line)) {
		try {
			size_t sep = line.find(" | ");
			if (sep == std::string::npos)
				throw BadInput();

			std::string date = line.substr(0, sep);
			double value = std::atof(line.substr(sep + 3).c_str());

			if (!isValidDate(date))
				throw BadInput();

			if (value < 0)
				throw NotPositive();
			if (value > 1000)
				throw TooLarge();

			double rate = getExchangeRate(date);
			std::cout << date << " => " << value << " = "
					  << rate * value << std::endl;

		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}


bool BitcoinExchange::isValidDate(const std::string &date) const {
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return false;

	int y = std::atoi(date.substr(0, 4).c_str());
	int m = std::atoi(date.substr(5, 2).c_str());
	int d = std::atoi(date.substr(8, 2).c_str());

	if (m < 1 || m > 12 || d < 1)
		return false;

	int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

	if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
		days[1] = 29;

	return d <= days[m - 1];
}

//bool BitcoinExchange::isValidValue(double value) const {
//	return (value >= 0 && value <= 1000);
//}

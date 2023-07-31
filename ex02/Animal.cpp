/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 05:15:18 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 05:15:20 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Orthodox Canonical Form
Animal::Animal() : _type("Animal") {
	std::cout << "Animal Default constructor called"
			  << std::endl;
}

Animal::Animal(const Animal &animal) : _type(animal._type) {
	std::cout << "Animal Copy constructor called"
			  << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
	if (this != &animal)
		(*this) = animal;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal Destructor called"
			  << std::endl;
}

// Member Function
std::string Animal::getType() const {
	return (this->_type);
}

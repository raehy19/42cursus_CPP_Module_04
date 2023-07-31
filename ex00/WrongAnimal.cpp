/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:22:43 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 16:22:44 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Orthodox Canonical Form
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal Default constructor called"
			  << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong_animal) : _type(wrong_animal._type) {
	std::cout << "WrongAnimal Copy constructor called"
			  << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong_animal) {
	if (this != &wrong_animal)
		(*this) = wrong_animal;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called"
			  << std::endl;
}

// Member Function
std::string WrongAnimal::getType() const {
	return (this->_type);
}

void WrongAnimal::makeSound() const {
	std::cout << "< WrongAnimal Sound >"
			  << std::endl;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 05:15:59 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 05:16:01 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Orthodox Canonical Form
Dog::Dog() : Animal(), _brain(new Brain()) {
	this->_type = "Dog";
	std::cout << "Dog Default constructor called"
			  << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain()) {
	(*this) = dog;
	std::cout << "Dog Copy constructor called"
			  << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		this->_type = dog._type;
		*this->_brain = *dog._brain;
	}
	return (*this);
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog Destructor called"
			  << std::endl;
}

// Member Function
void Dog::makeSound() const {
	std::cout << "WOOF!!   ૮₍ • ᴥ • ₎ა"
			  << std::endl;
}


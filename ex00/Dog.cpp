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
Dog::Dog() : Animal() {
	this->_type = "Dog";
	std::cout << "Dog Default constructor called"
			  << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	(*this) = dog;
	std::cout << "Dog Copy constructor called"
			  << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog)
		this->_type = dog._type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog Destructor called"
			  << std::endl;
}

// Member Function
void Dog::makeSound() const {
	std::cout << "WOOF!!   ૮₍ • ᴥ • ₎ა"
			  << std::endl;
}


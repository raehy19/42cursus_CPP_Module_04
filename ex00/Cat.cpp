/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 05:15:36 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 05:15:37 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Orthodox Canonical Form
Cat::Cat() : Animal() {
	this->_type = "Cat";
	std::cout << "Cat Default constructor called"
			  << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	(*this) = cat;
	std::cout << "Cat Copy constructor called"
			  << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat)
		this->_type = cat._type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat Destructor called"
			  << std::endl;
}

// Member Function
void Cat::makeSound() const {
	std::cout << "Meow!!!    ≽^•⩊•^≼"
			  << std::endl;
}
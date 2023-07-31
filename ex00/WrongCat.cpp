/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:22:16 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 16:22:17 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Orthodox Canonical Form
WrongCat::WrongCat() : WrongAnimal() {
	this->_type = "WrongCat";
	std::cout << "WrongCat Default constructor called"
			  << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrong_cat) : WrongAnimal(wrong_cat) {
	(*this) = wrong_cat;
	std::cout << "WrongCat Copy constructor called"
			  << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrong_cat) {
	if (this != &wrong_cat)
		this->_type = wrong_cat._type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called"
			  << std::endl;
}

// Member Function
void WrongCat::makeSound() const {
	std::cout << "WRONG MEOWW!!   ≽^•⩊•^≼"
			  << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:00:00 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 17:00:01 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Orthodox Canonical Form
Brain::Brain() {
	std::cout << "Brain Default constructor called"
			  << std::endl;
}

Brain::Brain(const Brain &brain) {
	(*this) = brain;
	std::cout << "Brain Copy constructor called"
			  << std::endl;
}

Brain &Brain::operator=(const Brain &brain) {
	if (this != &brain) {
		for (int i(0); i < 100; ++i)
			this->_ideas[i] = brain._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain Destructor called"
			  << std::endl;
}

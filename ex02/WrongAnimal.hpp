/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:22:52 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 16:22:53 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string _type;

public:
	// Orthodox Canonical Form
	WrongAnimal();

	WrongAnimal(const WrongAnimal &wrong_animal);

	WrongAnimal &operator=(const WrongAnimal &wrong_animal);

	virtual ~WrongAnimal();

	// Member Functions
	std::string getType(void) const;

	void makeSound(void) const;
};

#endif

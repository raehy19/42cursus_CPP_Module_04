/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 05:15:28 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 05:15:31 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string _type;

public:
	// Orthodox Canonical Form
	Animal();

	Animal(const Animal &animal);

	Animal &operator=(const Animal &animal);

	virtual ~Animal();

	// Member Functions
	std::string getType(void) const;

	virtual void makeSound(void) const = 0;
};

#endif
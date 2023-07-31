/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 05:16:17 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 05:16:18 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	// Orthodox Canonical Form
	Dog();

	Dog(const Dog &dog);

	Dog &operator=(const Dog &dog);

	~Dog();

	// Member Function
	void makeSound(void) const;
};

#endif



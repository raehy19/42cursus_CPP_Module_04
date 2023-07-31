/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 05:15:44 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 05:15:46 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	// Orthodox Canonical Form
	Cat();

	Cat(const Cat &cat);

	Cat &operator=(const Cat &cat);

	~Cat();

	// Member Function
	void makeSound(void) const;
};

#endif

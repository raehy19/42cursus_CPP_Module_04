/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:22:30 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 16:22:31 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	// Orthodox Canonical Form
	WrongCat();

	WrongCat(const WrongCat &wrong_cat);

	WrongCat &operator=(const WrongCat &wrong_cat);

	~WrongCat();

	// Member Function
	void makeSound(void) const;
};

#endif

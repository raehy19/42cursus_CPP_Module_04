/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:59:51 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/31 16:59:52 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string _ideas[100];
public:
	// Orthodox Canonical Form
	Brain();

	Brain(const Brain &brain);

	Brain &operator=(const Brain &brain);

	~Brain();
};

#endif

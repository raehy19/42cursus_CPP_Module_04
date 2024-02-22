/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:24:46 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 04:24:47 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICHARACTER_HPP

class ICharacter {
	public:
		virtual ~ICharacter() {}

		virtual std::string const &getName() const = 0;

		virtual void equip(AMateria *m) = 0;

		virtual void unequip(int idx) = 0;

		virtual void use(int idx, ICharacter &target) = 0;
};

#define ICHARACTER_HPP
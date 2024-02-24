/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:14:02 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 04:14:03 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria *_slot[4];
	public:
		///// Orthodox Canonical Form //////
		// 기본 생성자
		Character(void);

		// 복사 생성자
		Character(const Character &character);

		// 대입 연산자 오버로딩
		Character &operator=(const Character &character);

		// 소멸자
		virtual ~Character(void);

		///// Member Functions /////
		// name을 인자로 받는 생성자
		Character(std::string name);

		// name을 반환하는 함수
		std::string const &getName() const;

		// equip 함수
		void equip(AMateria *m);

		// unequip 함수
		void unequip(int idx);

		// use 함수
		void use(int idx, ICharacter &target);

		// idx번째 slot의 AMateria 주소를 반환하는 함수
		AMateria *getSlot(int idx) const;
};

#endif
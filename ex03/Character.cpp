/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:14:08 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 04:14:10 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

///// Orthodox Canonical Form /////
// 기본 생성자
Character::Character(void) : _name("default") {
	// slot  초기화
	for (int i = 0; i < 4; ++i)
		this->_slot[i] = NULL;
}

// 복사 생성자
Character::Character(const Character &character) {
	// 대입 연산자 사용
	*this = character;
}

// 대입 연산자 오버로딩
Character &Character::operator=(const Character &character) {
	if (this == &character)
		return (*this);

	// deep copy
	this->_name = character.getName();

	for (int i = 0; i < 4; ++i) {
		delete this->_slot[i];
		this->_slot[i] = NULL;
		if (character.getSlot(i))
			this->_slot[i] = character.getSlot(i)->clone();
	}
	return (*this);
}

// 소멸자
Character::~Character(void) {
	for (int i = 0; i < 4; ++i) {
		delete this->_slot[i];
		this->_slot[i] = NULL;
	}
}

///// Member Functions /////
// name을 인자로 받는 생성자
Character::Character(std::string name) : _name(name) {
	// slot  초기화
	for (int i = 0; i < 4; ++i)
		this->_slot[i] = NULL;
}

// name을 반환하는 함수
std::string const &Character::getName() const {
	return (this->_name);
}

// equip 함수
void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (!this->_slot[i]) {
			this->_slot[i] = m;
			break;
		}
	}
}

// unequip 함수
void Character::unequip(int idx) {
	if (idx > -1 && idx < 4)
		this->_slot[idx] = NULL;
}

// use 함수
void Character::use(int idx, ICharacter &target) {
	if (idx > -1 && idx < 4) {
		if (this->_slot[idx])
			this->_slot[idx]->use(target);
	}
}

// idx번째 slot의 AMateria 주소를 반환하는 함수
AMateria *Character::getSlot(int idx) const {
	if (idx > -1 && idx < 4)
		return (this->_slot[idx]);
	return (NULL);
}

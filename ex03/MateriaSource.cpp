/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 06:15:59 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 06:16:00 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

///// Orthodox Canonical Form //////
// 기본 생성자
MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; ++i)
		this->_slot[i] = NULL;
}

// 복사 생성자
MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	*this = materiaSource;
}

// 대입 연산자 오버로딩
MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	if (this == &materiaSource)
		return (*this);

	for (int i = 0; i < 4; i++) {
		delete this->_slot[i];
		this->_slot[i] = NULL;

		if (materiaSource.getSlot(i))
			this->_slot[i] = materiaSource.getSlot(i)->clone();
	}
	return (*this);
}


// 소멸자
MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; ++i) {
		delete this->_slot[i];
		this->_slot[i] = NULL;
	}
}


///// Member Functions /////
// learnMateria : AMateria *m을 인자로 받아 빈 slot에 저장
void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (this->_slot[i] == NULL) {
			this->_slot[i] = m;
			return;
		}
	}
}

// createMateria : type을 인자로 받아 slot에 일치하는 type이 있으면 clone하여 반환
AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; ++i)
		if (this->_slot[i] && this->_slot[i]->getType() == type)
			return (this->_slot[i]->clone());
	return (NULL);
}

// slot의 값을 반환하는 함수
AMateria *MateriaSource::getSlot(int idx) const {
	if (idx > -1 && idx < 4)
		return (this->_slot[idx]);
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 06:14:51 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 06:14:51 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

///// Orthodox Canonical Form /////
// 기본 생성자
Cure::Cure() : AMateria("cure") {}

// 복사 생성자
Cure::Cure(Cure const &cure) : AMateria(cure.getType()) {
	*this = cure;
}

// 할당 연산자 오버로딩
Cure &Cure::operator=(Cure const &cure) {
	if (this == &cure)
		return (*this);

	this->_type = cure._type;
	return (*this);
}

// 소멸자
Cure::~Cure() {}

///// Member Functions /////
// clone : 자신을 복제하는 함수
AMateria *Cure::clone() const {
	// 복사 생성자 호출
	return (new Cure(*this));
}

// use : target을 치료를 출력하는 함수
void Cure::use(ICharacter &target) {
	// target 치료 출력
	std::cout << " * heals " << target.getName() << "’s wounds *" << std::endl;
}

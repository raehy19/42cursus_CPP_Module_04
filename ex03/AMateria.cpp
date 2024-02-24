/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:36:42 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/22 18:36:43 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

///// Orthodox Canonical Form /////

// 기본 생성자
AMateria::AMateria() {}

// 복사 생성자
AMateria::AMateria(const AMateria &aMateria) {
	*this = aMateria;
}

// 대입 연산자 오버로딩
AMateria &AMateria::operator=(const AMateria &aMateria) {
	if (this == &aMateria)
		return (*this);
	this->_type = aMateria._type;
	return (*this);
}

// 소멸자 virtual
AMateria::~AMateria() {}

///// Member Functions /////

// type을 인자로 받는 생성자
AMateria::AMateria(std::string const &type) : _type(type) {}

// type을 반환하는 함수
std::string const &AMateria::getType() const {
	return (this->_type);
}

// use 함수
void AMateria::use(ICharacter &target) {
	// 가상 함수의 기본 구현
	std::cout << " * uses some materia " << this->_type << " on " << target.getName() << " *" << std::endl;
}

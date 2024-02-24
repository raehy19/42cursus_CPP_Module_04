/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 06:14:20 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 06:14:20 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

///// Orthodox Canonical Form /////
// 기본 생성자
Ice::Ice() : AMateria("ice") {}

// 복사 생성자
Ice::Ice(Ice const &ice) : AMateria(ice.getType()) {
	*this = ice;
}

// 할당 연산자 오버로딩
Ice &Ice::operator=(Ice const &ice) {
	if (this == &ice)
		return (*this);

	this->_type = ice._type;
	return (*this);
}

// 소멸자
Ice::~Ice() {}

///// Member Functions /////
// clone : 자신을 복제하는 함수
AMateria *Ice::clone() const {
	// 복사 생성자 호출
	return (new Ice(*this));
}

// use : target을 얼리는 함수
void Ice::use(ICharacter &target) {
	// target 얼리는 출력
	std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
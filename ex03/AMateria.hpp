/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:36:50 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/22 18:36:52 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		// type을 저장하는 변수
		std::string _type;
	public:
		////// Orthodox Canonical Form //////
		// 기본 생성자
		AMateria();

		// 복사 생성자
		AMateria(const AMateria &aMateria);

		// 대입 연산자 오버로딩
		AMateria &operator=(const AMateria &aMateria);

		// 소멸자
		virtual ~AMateria();

		///// Member Functions /////
		// type을 인자로 받는 생성자
		AMateria(std::string const &type); //

		// type을 반환하는 함수
		std::string const &getType() const;

		// clone 함수 (순수 가상함수)
		virtual AMateria *clone() const = 0;

		// use 함수 (가상함수)
		virtual void use(ICharacter &target);
};

#endif
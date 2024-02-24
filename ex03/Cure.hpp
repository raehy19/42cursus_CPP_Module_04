/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 06:14:46 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 06:14:48 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		///// Orthodox Canonical Form /////
		// 기본 생성자
		Cure();

		// 복사 생성자
		Cure(Cure const &cure);

		// 할당 연산자 오버로딩
		Cure &operator=(Cure const &cure);

		// 소멸자
		virtual ~Cure();

		///// Member Functions /////
		// clone : 자신을 복제하는 함수
		AMateria *clone() const;

		// use : target을 치료를 출력하는 함수
		void use(ICharacter &target);
};

#endif
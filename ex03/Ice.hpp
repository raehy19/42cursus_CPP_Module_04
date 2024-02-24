/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 06:14:26 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 06:14:27 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		///// Orthodox Canonical Form /////
		// 기본 생성자
		Ice();

		// 복사 생성자
		Ice(Ice const &ice);

		// 할당 연산자 오버로딩
		Ice &operator=(Ice const &ice);

		// 소멸자
		virtual ~Ice();

		///// Member Functions /////
		// clone : 자신을 복제하는 함수
		AMateria *clone() const;

		// use : target을 얼리는 함수
		void use(ICharacter &target);
};

#endif
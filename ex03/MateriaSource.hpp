/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 06:15:54 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 06:15:55 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *_slot[4];
	public:
		///// Orthodox Canonical Form //////
		// 기본 생성자
		MateriaSource(void);

		// 복사 생성자
		MateriaSource(const MateriaSource &materiaSource);

		// 대입 연산자 오버로딩
		MateriaSource &operator=(const MateriaSource &materiaSource);

		// 소멸자
		virtual ~MateriaSource(void);

		///// Member Functions /////
		// learnMateria : AMateria *m을 인자로 받아 빈 _slot에 저장
		void learnMateria(AMateria *m);

		// createMateria : type을 인자로 받아 slot에서 일치하는 AMateria를 반환
		AMateria *createMateria(std::string const &type);

		//
		AMateria *getSlot(int idx) const;
};


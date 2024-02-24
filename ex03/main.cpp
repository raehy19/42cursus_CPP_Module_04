/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:15:29 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 05:15:31 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

#include <iostream>

int main() {
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}


//void checkLeaks() {
//	system("leaks ex03");
//}
//
//int main() {
//	atexit(checkLeaks);
//
//	IMateriaSource *src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//
//	ICharacter *me = new Character("me");
//	AMateria *tmp;
//	AMateria *tmp2;
//
//	// Ice Materia 생성 및 장착
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//
//	// Cure Materia 생성 및 장착
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//
//	// 또 다른 Ice Materia 생성 및 장착 시도
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//
//	// 또 다른 Cure Materia 생성 및 장착 시도
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//
//	// 인벤토리가 가득 찬 상태에서 Materia 장착 시도
//	tmp2 = src->createMateria("ice");
//	me->equip(tmp2); // 장착되지 않음
//
//	ICharacter *bob = new Character("bob");
//
//	// 각 Materia 사용
//
//	std::cout << "use(0, *bob)" << std::endl;
//	me->use(0, *bob);
//
//	std::cout << "use(1, *bob)" << std::endl;
//	me->use(1, *bob);
//
//	std::cout << "use(2, *bob)" << std::endl;
//	me->use(2, *bob);
//
//	std::cout << "use(3, *bob)" << std::endl;
//	me->use(3, *bob);
//
//	// 4번째 slot(tmp) 장착 해제 후, 사용 시도
//	me->unequip(3);
//	std::cout << "4th slot unequipped" << std::endl;
//
//	std::cout << "use(3, *bob)" << std::endl;
//	me->use(3, *bob); // 빈 slot이므로 아무것도 출력되지 않음
//
//	// 장착 해제된 slot에 Materia 다시 장착 시도
//	me->equip(tmp2);
//	std::cout << "4th slot equipped" << std::endl;
//
//	std::cout << "use(3, *bob)" << std::endl;
//	me->use(3, *bob);
//
//	delete bob;
//	std::cout << "bob deleted" << std::endl;
//
//	delete me;
//	std::cout << "me deleted" << std::endl;
//
//	delete src;
//	std::cout << "src deleted" << std::endl;
//
//	// 장착 해제된 Materia에 대한 메모리 관리 (tmp)
//	delete tmp;
//	std::cout << "tmp deleted" << std::endl;
//
//	return 0;
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:48:58 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/30 22:49:00 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void check_leak(void) {
	system("leaks ex00");
}

int main() {

	atexit(check_leak);

	std::cout << "======= basic test =======" << std::endl;

	std::cout << "======= dog =======" << std::endl;
	Dog dog1;
	std::cout << "======= dog copy =======" << std::endl;
	Dog dog2(dog1);

	std::cout << "======= cat =======" << std::endl;
	Cat cat1;
	std::cout << "======= cat copy =======" << std::endl;
	Cat cat2 = cat1;

	std::cout << "======= cat sound =======" << std::endl;
	cat2.makeSound();

	std::cout << "======= dog sound =======" << std::endl;
	dog2.makeSound();

	std::cout << "=========================" << std::endl << std::endl;

	std::cout << "======= given main =======" << std::endl;

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // will output the cat sound!
	j->makeSound(); // will output the dog sound!
	meta->makeSound();

	std::cout << "=========================" << std::endl << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << "=========================" << std::endl << std::endl;

	std::cout << "======= Wrong Animal =======" << std::endl;

	const WrongAnimal *wrong_meta = new WrongAnimal();
	const WrongAnimal *w_cat1 = new WrongCat();
	const WrongCat *w_cat2 = new WrongCat();

	std::cout << "======= type =======" << std::endl;
	std::cout << wrong_meta->getType() << " " << std::endl;
	std::cout << w_cat1->getType() << " " << std::endl;
	std::cout << w_cat2->getType() << " " << std::endl;

	std::cout << "======= sound =======" << std::endl;
	wrong_meta->makeSound();
	w_cat1->makeSound();
	w_cat2->makeSound();

	std::cout << "=========================" << std::endl << std::endl;
	delete wrong_meta;
	delete w_cat1;
	delete w_cat2;

	system("leaks ex00");
	std::cout << "=========================" << std::endl << std::endl;

	return (0);
}
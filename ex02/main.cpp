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

int main() {
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

	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound(); // will output the dog sound!
	i->makeSound(); // will output the cat sound!

	std::cout << "=========================" << std::endl << std::endl;
	delete j;
	delete i;
	std::cout << "=========================" << std::endl << std::endl;

	system("leaks ex01");

	std::cout << "======= dog cat compare =======" << std::endl;
	std::cout << "==== dog ====" << std::endl;

	const Animal *dog = new Dog();

	std::cout << dog->getType() << " " << std::endl;

	dog->makeSound(); // will output the dog sound!

	delete dog;

	system("leaks ex01");

	std::cout << "=========================" << std::endl << std::endl;
	std::cout << "==== cat ====" << std::endl;

	const Animal *cat = new Cat();

	std::cout << cat->getType() << " " << std::endl;

	cat->makeSound(); // will output the cat sound!

	delete cat;

	system("leaks ex01");

	std::cout << "=========================" << std::endl << std::endl;

	std::cout << "======= Animal List =======" << std::endl;
	int num = 10;

	const Animal *animal_list[num];
	for (int(i) = 0; i < num; ++i) {
		if (i % 2)
			animal_list[i] = new Cat();
		else
			animal_list[i] = new Dog();
	}
	std::cout << "==== delete ====" << std::endl;
	for (int(i) = 0; i < num; ++i) {
		delete animal_list[i];
	}
	system("leaks ex01");
	std::cout << "=========================" << std::endl << std::endl;

//	Animal test;

	return (0);
}
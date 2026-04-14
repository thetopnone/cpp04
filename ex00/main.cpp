/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:16:54 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/13 16:16:55 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	 main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "\n--Destructors Tests--\n";
	delete meta;
	delete j;
	delete i;

	std::cout << "\n--Wrong Animal Tests--\n";
	const WrongAnimal* wrong = new WrongCat();

	std::cout << "\n--Type Method Tests--\n";
	std::cout << wrong->getType() << std::endl;

	std::cout << "\n--Make Sound Method Tests--\n";
	wrong->makeSound();

	std::cout << "\n--Wrong Destructors Tests--\n";
	delete wrong;
	return 0;
}

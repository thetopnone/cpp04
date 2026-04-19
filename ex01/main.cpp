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
{	
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	dog->setIdea("FOOOOOOOOOOD", 0);
	std::cout << "Dog idea 0:" << dog->getIdea(0) <<std::endl;

	delete dog;
	delete cat;
}
{
	Animal* zoo[20];
	for(int i = 0; i < 20; i++){
		if (i < 10)
			zoo[i] = new Dog;
		else
			zoo[i] = new Cat;
	}

	for (int i = 0; i < 20; i++){
		delete zoo[i];
	}
	return 0;
}
}

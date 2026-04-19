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
	Dog* dog1 = new Dog();
	Dog* dog2 = new Dog(*dog1);
	Dog dog3 = *	 dog1;

	std::cout << "Dog 1 idea 0: " << dog1->getIdea(0) << std::endl;
	std::cout << "Dog 2 idea 0: " << dog2->getIdea(0) << std::endl;
	std::cout << "Dog 3 idea 0: " << dog3.getIdea(0) << std::endl;
	dog1->setIdea("FOOOOOOOOOOD", 0);
	std::cout << "Dog 1 idea 0: " << dog1->getIdea(0) << std::endl;
	std::cout << "Dog 2 idea 0: " << dog2->getIdea(0) << std::endl;
	std::cout << "Dog 3 idea 0: " << dog3.getIdea(0) << std::endl;


	delete dog1;
	delete dog2;
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
}
/*
{
	std::cout << "\n--Wrong Animal Tests--\n";
	WrongAnimal* wrongCat = new WrongCat();
	std::cout << "\n--Deleting Wrong Cat Will create a memory leak--\n";
	delete wrongCat;
}*/
return 0;
}

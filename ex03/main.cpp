/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:04:49 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:04:50 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
{
	std::cout << "\n--Subject Provided Tests--\n\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	std::cout << "\n--End of Subject Provided Tests--\n";
}
{
	std::cout << "\n--Character Tests--\n\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* Conan = new Character("Conan");
	AMateria* tmp[4];
	tmp[0] = src->createMateria("cure");
	Conan->equip(tmp[0]->clone());
	tmp[1] = src->createMateria("cure");
	Conan->equip(tmp[1]->clone());
	tmp[2] = src->createMateria("fire");
	tmp[2] = src->createMateria("ice");
	Conan->equip(tmp[2]->clone());
	tmp[3] = src->createMateria("cure");
	Conan->equip(tmp[3]);
	Conan->unequip(3);
	Conan->equip(tmp[3]->clone());

	
	std::cout << "\n--Character Deep Copy Test--\n";
	Character* Conan_1 = new Character(*Conan);
	Character Conan_2 = *Conan;
	std::cout << "Deleting Original Conan\n";
	delete Conan;
	std::cout << "Conan_1 1st slot: ";
	Conan_1->use(0, Conan_2);
	std::cout << "\nConan_2 1st slot: ";
	Conan_2.use(0, *Conan_1);

	for (int i = 0; i < 4; ++i){
		delete tmp[i];
	}	
	delete Conan_1;
	delete src;
}
	return 0;
}

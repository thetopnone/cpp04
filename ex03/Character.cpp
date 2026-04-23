/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:03:15 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:03:16 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
	:_name("")
{
	for (int i = 0; i < 4; ++i){
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name)
	:_name(name)
{
	for (int i = 0; i < 4; ++i){
		_inventory[i] = NULL;
	}
}

Character::Character(Character const& other)
	:_name(other._name)
{
	for (int i = 0; i < 4; ++i){
		if (other._inventory[i] == NULL)
			_inventory[i] = NULL;
		else
			_inventory[i] = other._inventory[i]->clone();
	}
}

Character &Character::operator=(Character const& other){
	if (this != &other){
		_name = other._name;
		for (int i = 0; i < 4; ++i){
		delete _inventory[i];
		if (other._inventory[i] == NULL)
			_inventory[i] = NULL;
		else
			_inventory[i] = other._inventory[i]->clone();
	}
	}
	return (*this);
}

Character::~Character(){
	for (int i = 0; i < 4 ; ++i){
		delete _inventory[i];
	}
}

std::string const& Character::getName() const{
	return (_name);
}

void Character::equip(AMateria *m){
	for (int i = 0; i < 4; ++i){
		if (_inventory[i] == NULL){
			std::cout << "Equiped Materia " << m->getType() << std::endl;
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Character " << _name << "'s Invetnory is Full!\n";
}

void Character::unequip(int idx){
	if (idx >= 0 && idx < 4){
		std::cout << "Unequiped Materia " << _inventory[idx]->getType() << " in slot " << idx << std::endl;
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >=0 && idx < 4){
		std::cout << "Character " << _name << " ";
		_inventory[idx]->use(target);
	}
}

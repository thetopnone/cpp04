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

Character::Character()
	:_name("")
{
	std::cout << "Character Default Constructor called" << std::endl;
	for (int i = 0; i < 4; ++i){
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name)
	:_name(name)
{
	std::cout << "Character Parameterized Constructor called " << std::endl;
	for (int i = 0; i < 4; ++i){
		_inventory[i] = NULL;
	}
}

Character::Character(Character const& other)
	:_name(other._name)
{
	std::cout << "Character Copy Constructor called" << std::endl;
	for (int i = 0; i < 4; ++i){
		_inventory[i] = other._inventory[i]->clone();
	}
}

Character &Character::operator=(Character const& other){
	std::cout << "Character Copy Assignment Operator called" << std::endl;
	if (this != &other){
		_name = other._name;
		for (int i = 0; i < 4; ++i){
		delete _inventory[i];
		_inventory[i] = other._inventory[i]->clone();
	}
	}
}

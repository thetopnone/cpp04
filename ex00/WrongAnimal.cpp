/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:12 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/14 18:29:58 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	:type("")
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other)
	:type(other.type)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const& other){
	std::cout << "WrongAnimal Copy Assignment Operator called" << std::endl;

	if (this != &other)
		type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound( void ) const{
	std::cout << "WrongAnimal Noises go brrrr" << std::endl;
}

std::string WrongAnimal::getType( void ) const{
	std::cout << "WrongAnimal getType method called" << std::endl;
	return (type);
}

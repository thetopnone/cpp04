/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:12 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/13 16:19:14 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
	:type("")
{
	std::cout << "AAnimal Constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& other)
	:type(other.type)
{
	std::cout << "AAnimal Copy Constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const& other){
	std::cout << "AAnimal Copy Assignment Operator called" << std::endl;

	if (this != &other)
		type = other.type;
	return (*this);
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal Destructor called" << std::endl;
}

/*
void AAnimal::makeSound( void ) const{
	std::cout << "AAnimal Noises go brrrr" << std::endl;
}*/

std::string AAnimal::getType( void ) const{
	std::cout << "AAnimal getType method called" << std::endl;
	return (type);
}

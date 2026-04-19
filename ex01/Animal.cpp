/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:12 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/13 16:19:14 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	:type("")
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(Animal const& other)
	:type(other.type)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const& other){
	std::cout << "Animal Copy Assignment Operator called" << std::endl;

	if (this != &other)
		type = other.type;
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound( void ) const{
	std::cout << "Animal Noises go brrrr" << std::endl;
}

std::string Animal::getType( void ) const{
	std::cout << "Animal getType method called" << std::endl;
	return (type);
}

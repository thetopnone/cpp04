/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:25 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/13 16:19:26 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	:Animal()
{
	std::cout << "Dog Constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const& other)
	:Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	type = other.type;
}

Dog &Dog::operator=(Dog const& other){
	std::cout << "Dog Copy Assignment Operator called" << std::endl;

	if (this != &other)
		type = other.type;
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound( void ) const{
	std::cout << "WOOF WOOF" << std::endl;
}

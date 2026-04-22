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
	:AAnimal()
{
	std::cout << "Dog Constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog const& other)
	:AAnimal()
	,brain(NULL)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(Dog const& other){
	std::cout << "Dog Copy Assignment Operator called" << std::endl;

	if (this != &other){
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
}

void Dog::setIdea(std::string idea, int pos){
	brain->setIdea(idea, pos);
}

std::string const& Dog::getIdea(int pos){
	return (brain->getIdea(pos));
}

void Dog::makeSound( void ) const{
	std::cout << "WOOF WOOF" << std::endl;
}

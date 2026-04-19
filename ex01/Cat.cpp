/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:32 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/13 16:19:33 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	:Animal()
{
	std::cout << "Cat Constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat const& other)
	:Animal(other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(Cat const& other){
	std::cout << "Cat Copy Assignment Operator called" << std::endl;

	if (this != &other){
		type = other.type;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat Destructor called" << std::endl;
	delete brain;
}

void Cat::setIdea(std::string idea, int pos){
	brain->setIdea(idea, pos);
}

std::string const& Cat::getIdea(int pos){
	return (brain->getIdea(pos));
}

void Cat::makeSound( void ) const{
	std::cout << "MEOW MEOW" << std::endl;
}

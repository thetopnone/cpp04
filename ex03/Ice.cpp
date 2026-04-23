/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:04:06 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:04:08 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
	:AMateria("ice")
{}

Ice::Ice(Ice const& other)
	:AMateria(other)
{}

Ice &Ice::operator=(Ice const& other){
	if (this != &other){
		*this = other;
	}
	return (*this);
}

Ice::~Ice(){}

AMateria* Ice::clone() const{
	std::cout << "Ice clone method called" << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

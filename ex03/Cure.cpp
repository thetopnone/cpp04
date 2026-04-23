/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:03:47 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:03:48 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
	:AMateria("cure")
{}

Cure::Cure(Cure const& other)
	:AMateria(other)
{}

Cure &Cure::operator=(Cure const& other){
	if (this != &other){
		*this = other;
	}
	return (*this);
}

Cure::~Cure(){}

AMateria* Cure::clone() const{
	std::cout << "Cure clone method called" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:02:50 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:02:51 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
	:_type("")
{}

AMateria::AMateria(std::string const& type)
	:_type(type)
{}

AMateria::AMateria(AMateria const& other)
	:_type(other.getType())
{}

AMateria &AMateria::operator=(AMateria const& other){
	if (this != &other)
		*this = other;
	return (*this);
}

AMateria::~AMateria(){}

std::string const& AMateria::getType() const{
	return (_type);
}

void AMateria::use(ICharacter& target){
	(void)target;
}

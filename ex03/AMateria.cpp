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

AMateria::AMateria()
	:_type(""){
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type)
	:_type(type){
	std::cout << "AMateria Parameterized Constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& other)
	:_type(other.getType()){
	std::cout << "AMateria Copy Constructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const& other){
	if (this != &other)
		(void)other;
	return (*this);
}

AMateria::~AMateria(){
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const& AMateria::getType() const{
	return (_type);
}

void AMateria::use(ICharacter& target){
	(void)target;
}

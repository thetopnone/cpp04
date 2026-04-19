/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:32 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/14 18:30:27 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	:WrongAnimal()
{
	std::cout << "WrongCat Constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& other)
	:WrongAnimal(other)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	type = "wrongcat";
}

WrongCat &WrongCat::operator=(WrongCat const& other){
	std::cout << "WrongCat Copy Assignment Operator called" << std::endl;

	if (this != &other)
		type = other.type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const{
	std::cout << "MEOW MEOW" << std::endl;
}

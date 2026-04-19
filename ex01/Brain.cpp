/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:51:02 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/14 18:51:05 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(Brain const& other)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(Brain const& other){
	std::cout << "Brain Copy Assignment Operator called" << std::endl;
	if (this != &other){
		for (int i = 0; i < 100; i++){
		ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

void Brain::setIdea(std::string idea, int pos){
	ideas[pos % 100] = idea;
}

std::string const& Brain::getIdea(int pos) const{
	return (ideas[pos % 100]);
}

Brain::~Brain(){
	std::cout << "Brain Destructor called" << std::endl;
}

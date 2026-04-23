/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:05:01 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:05:04 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; ++i){
		_stash[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const& other){
	for (int i = 0; i < 4; ++i){
		if (other._stash[i] == NULL)
			_stash[i] = NULL;
		else
			_stash[i] = other._stash[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const& other){
	for (int i = 0; i < 4; ++i){
		delete _stash[i];
		if (other._stash[i] == NULL)
			_stash[i] = NULL;
		else
			_stash[i] = other._stash[i]->clone();
	}
	return(*this);
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; ++i){
		delete _stash[i];
	}
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; ++i){
		if (_stash[i] == NULL){
			_stash[i] = m;
			return ;
		}
	}
	std::cout << "MateriaSource stash is Filled!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type){
	for (int i = 0; i < 4 ; ++i){
		if (_stash[i]!= NULL && _stash[i]->getType() == type){
			return (_stash[i]->clone());
		}
	}
	std::cout << "No Materia of type " << type << " has been found" << std::endl;
	return (NULL);
}

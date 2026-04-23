/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:05:14 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:05:15 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource: public IMateriaSource{
	private:
		AMateria* _stash[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& other);
		MateriaSource &operator=(MateriaSource const& other);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
} ;
#endif

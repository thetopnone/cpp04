/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:03:07 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:03:09 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>

class ICharacter;

class AMateria{
	protected:
		std::string const _type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const& other);
		AMateria &operator=(AMateria const& other);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif

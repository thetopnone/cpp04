/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:04:15 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:04:16 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria{
	public:
		Ice();
		Ice(Ice const& other);
		Ice &operator=(Ice const& other);
		~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif

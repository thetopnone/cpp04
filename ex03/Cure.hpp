/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:03:55 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/22 18:03:56 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria{
	public:
		Cure();
		Cure(Cure const& other);
		Cure &operator=(Cure const& other);
		~Cure();

		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:18:42 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/13 16:19:00 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <string>
# include <iostream>

class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(AAnimal const& other);
		AAnimal &operator=(AAnimal const& ohter);
		virtual ~AAnimal() = 0;

		virtual void  makeSound( void ) const = 0;
		std::string getType() const;
};
#endif

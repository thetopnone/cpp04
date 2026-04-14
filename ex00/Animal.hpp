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

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const& other);
		Animal &operator=(Animal const& ohter);
		virtual ~Animal();

		virtual void  makeSound( void ) const;
		std::string getType() const;
};
#endif

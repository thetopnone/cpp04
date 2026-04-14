/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:21 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/13 16:19:22 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal{
	public:
		Dog();
		Dog(Dog const& other);
		Dog &operator=(Dog const& ohter);
		~Dog();

		void makeSound( void ) const;
} ;
#endif

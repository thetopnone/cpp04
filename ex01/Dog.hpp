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
# include "Brain.hpp"

class Dog: public Animal{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(Dog const& other);
		Dog &operator=(Dog const& ohter);
		~Dog();

		void setIdea(std::string idea, int pos);
		std::string const& getIdea(int pos);
		void makeSound( void ) const;
} ;
#endif

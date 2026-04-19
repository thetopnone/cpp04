/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:37 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/13 16:19:38 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(Cat const& other);
		Cat &operator=(Cat const& ohter);
		~Cat();

		void setIdea(std::string idea, int pos);
		std::string const& getIdea(int pos);
		void makeSound( void ) const;
};
#endif

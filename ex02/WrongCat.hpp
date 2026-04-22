/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:37 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/14 18:30:20 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat: public WrongAnimal{
	private:
		Brain* brain;
	public:
		WrongCat();
		WrongCat(WrongCat const& other);
		WrongCat &operator=(WrongCat const& ohter);
		~WrongCat();

		void makeSound( void ) const;
};
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:18:42 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/14 18:29:47 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const& other);
		WrongAnimal &operator=(WrongAnimal const& ohter);
		~WrongAnimal();

		void  makeSound( void ) const;
		std::string getType() const;
};
#endif

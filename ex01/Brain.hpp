/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:51:13 by akonstan          #+#    #+#             */
/*   Updated: 2026/04/14 18:51:14 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const& other);
		Brain &operator=(Brain const& other);
		~Brain();

		void setIdea(std::string idea, int pos);
		std::string const &getIdea(int pos) const;
};
#endif

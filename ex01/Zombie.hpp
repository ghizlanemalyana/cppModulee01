    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:13:06 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/08 22:43:34 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie{
	private:
		std::string name;
	public:
		void announce(void);
		void zombiesName(std::string name);
};
Zombie* zombieHorde(int N, std::string name);

#endif
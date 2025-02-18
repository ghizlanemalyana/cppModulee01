/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 20:02:50 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/18 19:26:13 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		Weapon* weapon;
		std::string name;
	public:
		HumanB(std::string name) : weapon(nullptr), name(name){}
		void attack();
		void setWeapon(Weapon& w);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 22:41:20 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/18 19:12:02 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}
void HumanB::attack()
{
	if (weapon){
		std::cout << name << " attack with their " << (*weapon).getType();
		std::cout << std::endl;
	}
	else{
		std::cout << name << " has no weapon to attack with!" << std::endl;
	}
		
}
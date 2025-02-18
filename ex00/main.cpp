/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:40:24 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/16 13:23:24 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* newZombie(std::string name )
{
	Zombie *zombie = new Zombie(name); 
	return (zombie);
}

int main()
{
	Zombie* zz = newZombie("heapZombie");
	zz->announce();
	randomChump("StackZombie");
	delete zz;
	return 0;
}



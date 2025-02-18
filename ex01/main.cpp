/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:30:50 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/17 17:48:04 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int num = 6;
	Zombie* zombies = zombieHorde(num, "zombieee");
	if (zombies != nullptr){
		for(int i = 0; i < num; i++)
		{
			zombies[i].announce();
		}
		delete[] zombies;
	}
}
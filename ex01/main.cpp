/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:56:06 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/12 17:56:10 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int num = 6;
	Zombie* zombies = zombieHorde(num, "zombieee");
	if (zombies != NULL){
		for(int i = 0; i < num; i++)
		{
			zombies[i].announce();
		}
		delete[] zombies;
	}
}
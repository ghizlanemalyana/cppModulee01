/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:39:04 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/09 16:12:32 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombies = new Zombie[N];
	if (N <= 0)
		return (nullptr);
	for (int i = 0; i < N; i++)
	{
		zombies[i].zombiesName(name);
	}
	return zombies;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:40:24 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/12 19:57:23 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zz = newZombie("heapZombie");
	zz->announce();
	randomChump("StackZombie");
	delete zz;
	return 0;
}
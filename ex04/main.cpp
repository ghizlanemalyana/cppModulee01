/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:25:00 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/10 21:15:43 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cout << "Usage: " << argv[0] << " <filename> s1 s2" << std::endl;
		return 1;  
	}
	Myclass::replace(argv[1], argv[2], argv[3]);
	return 0;
}
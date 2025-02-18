/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:33:34 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/12 19:08:26 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug(void)
{
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
		std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
		std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level) {
	// array of pairs mapping levels to member function pointers
	std::pair<std::string, void (Harl::*)(void)> complaints[] = {
		std::make_pair("DEBUG", &Harl::debug),
		std::make_pair("INFO", &Harl::info),
		std::make_pair("WARNING", &Harl::warning),
		std::make_pair("ERROR", &Harl::error)
	};
	//find level/ loop through the array
	
	for (size_t i = 0; i < 5; i++){
		if (level == complaints[i].first){
			(this->*complaints[i].second)();
			return ;
		}
	}
	std::cout <<"invalid level" << std::endl;
}

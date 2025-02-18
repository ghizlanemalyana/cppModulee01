/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:49:10 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/10 16:25:35 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){}

const std::string& Weapon::getType(){

	return type;
}
void Weapon::setType(std::string newtype)
{
	this->type = newtype;
}

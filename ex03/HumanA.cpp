/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:43:33 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/14 12:34:10 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <string>
#include <iostream>

/************************* CONSTRUCTOR & DESTRUCTOR ***************************/

HumanA::HumanA(std::string name, Weapon &weapon_A) : _name(name), _weapon(weapon_A)
{
	return ;
}


HumanA::~HumanA() {
	return ;
}

/***************************** OTHER FUNCTION ********************************/

void	HumanA::attack(void) {
	std::cout	<< this->_name << " attacks with their "
				<< this->_weapon.getType()
				<< std::endl ;
}

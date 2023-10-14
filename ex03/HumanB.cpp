/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:43:15 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/14 12:41:23 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <string>
#include <iostream>

/************************* COSNTRUCTOR & DESTRUCTOR ***************************/

// signifie que le champs membre _name est initialise avec la valeur name"
// passee en parametre lors de l'appel a la fonction.
HumanB::HumanB(std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB() {
	return ;
}

/***************************** OTHER FUNCTIONS *******************************/

void	HumanB::attack(void) {
	std::cout	<< this->_name << " attacks with their "
				<< (*this->_weapon).getType()
				<< std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

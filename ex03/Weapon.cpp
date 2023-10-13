/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:42:28 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/13 16:41:36 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/***************************** SETTERS & GETTERS ******************************/

const std::string   &Weapon::getType() const {
    return (this->type);
}

void	Weapon::setType(std::string type_of_weapon) {
    this->type = type_of_weapon;
    return ;
}

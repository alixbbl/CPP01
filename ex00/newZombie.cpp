/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:04:05 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/13 12:04:07 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool    Zombie::set_Name(std::string string) {
    if (!only_alpha(string)) {
        std::cout << "Error : You can only use letters and '-'."
            << std::endl;
        return false;
    }
    this->_name = string;
    return true;
}

void    Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

/******************************* UTILS *********************************/

bool    Zombie::only_alpha(std::string str) {
    for (std::string::iterator it = str.begin(); it!= str.end(); it++) {
        if (!std::isalpha(*it) && *it != ' ' && *it != '-')
            return false;
    }
    return true;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:14:50 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/13 15:14:51 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {

    Zombie *zombie = new Zombie();
    zombie->set_Name(name);
    return zombie; }

void    Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; }


/***************************** SETTERS *******************************/
bool    Zombie::set_Name(std::string string) {
    if (!only_alpha(string)) {
        std::cout << "Error : You can only use letters and '-'."
            << std::endl;
        return false;
    }
    this->_name = string;
    return true;
}


/******************************* UTILS *********************************/

bool    Zombie::only_alpha(std::string str) {
    for (std::string::iterator it = str.begin(); it!= str.end(); it++) {
        if (!std::isalpha(*it) && *it != ' ' && *it != '-')
            return false;
    }
    return true;
}

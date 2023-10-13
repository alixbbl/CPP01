/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:04:26 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/13 12:04:28 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
    Zombie() : _name("") {}
    ~Zombie() {
        std::cout << "Destroying zombie: " << _name << std::endl; }
    bool        set_Name(std::string str);
    void        announce(void);

private:
    std::string _name;
    bool        only_alpha(std::string str);
};

#endif

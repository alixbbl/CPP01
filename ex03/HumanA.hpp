/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:44:19 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/14 12:29:38 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

class HumanA {

	public:
	HumanA(std::string name, Weapon &weapon_A);
	~HumanA();
		void	attack(void);

	private:
		std::string _name;
		Weapon _weapon;
};

#endif

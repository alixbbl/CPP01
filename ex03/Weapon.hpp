/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:46:16 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/13 16:33:53 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

/*
Le constructeur de la classe Weapon prend le nom d'une arme en argument (string),
cela permet d'initialiser l'attribut type de l'objet qui sera cree de la
classe Weapon.

*/

class Weapon {

	public:
	Weapon(std::string weapon_name) : type(weapon_name) {}
		const std::string &getType() const;
		void	setType(std::string type_of_weapon);

	private:
		std::string type;
};

#endif

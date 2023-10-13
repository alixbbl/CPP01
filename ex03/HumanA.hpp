/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:44:19 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/13 16:46:36 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>

class HumanA {

	public:
	HumanA(Weapon weapon_humanA) : name(""), Weapon("") {}
		void	attack();

	private:
		std::string name;
		Weapon Weapon;
};

#endif

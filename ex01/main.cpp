/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:59:04 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/13 12:17:40 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

#define NBR_MIN -50000
#define NBR_MAX 50000

Zombie* zombieHorde(int N, std::string name);

int main(int ac, char **av) {

    if (!av[1]) {
        std::cout << "Please enter valid arguments (number of zombies and army name.)" << std::endl;
        return 0;
    }
    int N = atoi(av[1]);
    std::string name = av[2];
    (void)ac;

    if (N > NBR_MIN && N < NBR_MAX) {
        Zombie* Horde = zombieHorde(N, name);
        for (int i = 0; i < N; i++) {
            Horde[i].announce(); }
        delete[] Horde;
    }
    else
        std::cout << "Please give a valid number of zombies (between -50 000 and 50 000)" << std::endl;
    return 0;
}

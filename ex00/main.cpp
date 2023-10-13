/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:02:26 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/13 12:08:24 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define NBR_MIN -50000
#define NBR_MAX 50000

void randomChump(std::string name);

int main(void) {

    int     nbr_zombies;
    std::string name;

    std::cout << "Wanna see your first zombie ? Press \"Enter\" !";
    std::cin.get();
    std::cout << "Please enter a valid zombie name (letters): ";
    std::getline(std::cin, name);
    randomChump(name);

    std::cout << "Now let's create your little army of zombies. Press \"Enter\" to start.";
    std::cin.get();
    std::cout << "How many zombies do you wanna create ?" << std::endl;
    std::cin >> nbr_zombies;
    std::cin.ignore();
    if (nbr_zombies < NBR_MAX && nbr_zombies > NBR_MIN) {
        Zombie *zombs = new Zombie[nbr_zombies];
        for (int i = 0; i < nbr_zombies; i++) {
            std::cout << "Enter a new zombie name or press \"Enter\" if done : " << std::endl;
            std::getline(std::cin, name);
            if (!name.empty()) {
                zombs[i].set_Name(name); }
            else
                break ; }

        std::cout << "Now let's eat all the brainzzz !!! - (Press \"Enter\")" << std::endl;
        std::cin.get();
        for (int i = 0; i < nbr_zombies; i++) {
            zombs[i].announce(); }
        delete[] zombs; }
    else
        std::cout << "Please give a valid number of zombies (between -50 000 and 50 000)" << std::endl;
    return 0;
}

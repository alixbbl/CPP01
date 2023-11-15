/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:33:02 by alibourb          #+#    #+#             */
/*   Updated: 2023/11/15 13:37:12 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {

    Harl hey_queen;

    if (ac != 2)
        return ((std::cout << " Error, wrong number of arguments" << std::endl), 0);
    if ((strcmp(av[1], "DEBUG")) && (strcmp(av[1], "ERROR"))
        && (strcmp(av[1], "INFO")) && (strcmp(av[1], "WARNING")))
        return ((std::cout << " Error, wrong argument" << std::endl), 0);

    if (!strcmp(av[1], "DEBUG"))
        hey_queen.complain("DEBUG");
    if (!strcmp(av[1], "ERROR"))
        hey_queen.complain("ERROR");
    if (!strcmp(av[1], "INFO"))
        hey_queen.complain("INFO");
    if (!strcmp(av[1], "WARNING"))
        hey_queen.complain("WARNING");
    return 0; }

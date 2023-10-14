/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:26:14 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/14 17:11:12 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define FAILURE 1
# define SUCCESS 0

/*
BUT DE L'EXERCICE :
Decouvrir les fonctions de travail sur les strings des biblis du C++; on veut
recoder la fonction replace en realite.
*/
void	ft_replace(std::string file, std::string str1, std::string str2) {

	std::ifstream file(arg1); // cree un objet en lecture file depuis arg1

	if (file.open()) {
		// utiliser ofstream pour copier dans un autre fichier
		// lire le contenu ligne a ligne avec getline() dans une boucle while
		// A chaque ligne lue, utiliser find de std::string pour trouver arg2
		// si on trouve arg2, erase() et concatener.
		// une fois fait ecrire dans le nouveau fichier.
		// repeter.
	}
	else {
		std::cerr << "File could not open" << std::endl;
		return FAILURE; }
}


int main(int ac, char **av) {

// Attention on ne peut pas avoir des strings vides, a inclure au parsing.

	if (micro_parsing(ac, av)) {
		std::string arg1(av[1]), arg2(av[2]), arg3(av[3]);
		replace(arg1, arg2, arg3); }
	else
		std::cerr	<< "Please enter valid arguments : a file name in letters
						and two strings in letters too, thanks !"
					<< std::endl;
	return SUCCESS;
}

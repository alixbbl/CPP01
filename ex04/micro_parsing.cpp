/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_parsing.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:26:08 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/15 17:37:54 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


/* Le C++ est plus permissif, on peut passer une string av[1] en argument
d'un appel de fonction, et avoir la signature suivante, la conversion se fait
implicitement. On peut donc avoir isValidFile(const string &), en ayant envoye
la string auparavant.

Fonction file.good() : file.good() verifie que la derniere operation sur file
a ete un succes, fonctionne en bool.
*/

bool	only_alpha(std::string str) {

	for (std::string::iterator it = str.begin(); it!= str.end(); it++) {
		if (!std::isalpha(*it) && *it != ' ' && *it != '-')
			return false; }
	return true; }


/*
ifstream est un type de std, il est utile pour lire a partir d'un fichier
en lecture seulement, ici on cree un objet de type ifstream appele "file"
qui copie le contenu filename caste en const et passe en argument.
Equivalent de la fonction open() en C. contient un destructeur et ferme le
fichier source (ici filename).
*/
bool	isValidFile(const std::string &filename) {

	std::ifstream file(filename.c_str());
		return file.good(); }


bool	micro_parsing(int ac, char **av) {

	if (ac != 4) {
		std::cerr	<< "Must enter 3 arguments for this programm to run !"
					<< std::endl;
		return false; }
	/*
	On fait une conversion en string depuis char * pour un meilleur usage des
	fonctions des biblis du C++. On evite ainsi de devoir jouer avec les
	pointeurs et donc avec les fonctions du langage C (strcat, strcpy etc).
	*/
	std::string arg1(av[1]), arg2(av[2]), arg3(av[3]); // conversion des 3 args

	if (arg1.empty() || arg2.empty() || arg3.empty()) {
		std::cerr << "Empty strings are forbidden." << std::endl;
		return false; }

	if (!isValidFile(arg1)) {
		std::cerr	<< "First argument must be a valid file name."
					<< std::endl;
		return false; }

	if (!only_alpha(arg2) || !only_alpha(arg3)) {
		std::cerr	<< "Please enter valid sentences (letters or !?.,-)"
					<< std::endl;
		return false; }

	return true; }

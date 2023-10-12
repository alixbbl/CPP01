#include "Zombie.hpp"

// a remettre dans un fichier annexe, probleme avec les .h ?
void randomChump(std::string name) {

    Zombie chumpchump;

    if (!name.empty()) {
        chumpchump.set_Name(name);
        chumpchump.announce(); }
    else
        std::cout << "Please enter a valid name." << std::endl;
}

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
    delete[] zombs;
    return 0;
}

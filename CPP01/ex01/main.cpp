#include "Zombie.hpp"

// a replacer dans le bon fichier
Zombie* zombieHorde(int N, std::string name) {
    
    Zombie* Horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        Horde[i].set_Name(name); }
    return Horde;
}

int main(int ac, char **av) {

    int     N = atoi(av[1]);
    std::string name = av[2];

    Zombie* Horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++) {
        Horde[i].announce(); }
    delete[] Horde;
    return 0;
}

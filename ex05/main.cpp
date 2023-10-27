#include "Harl.hpp"

int main(int ac, char **av) {

    Harl hey_queen;

    if (ac != 2)
        return ((std::cout << " Error, wrong number of arguments" << std::endl), 0);
    if ((std::strcmp(av[1], "DEBUG")) && (std::strcmp(av[1], "ERROR"))
        && (std::strcmp(av[1], "INFO")) && (std::strcmp(av[1], "WARNING")))
        return ((std::cout << " Error, wrong argument" << std::endl), 0);

    hey_queen.complain("DEBUG");
    hey_queen.complain("ERROR");
    hey_queen.complain("INFO");
    hey_queen.complain("WARNING");

    return 0; }
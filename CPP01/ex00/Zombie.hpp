
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
    Zombie() : _name("") {}
    ~Zombie() {
        std::cout << "Destroying zombie: " << _name << std::endl; }
    bool        set_Name(std::string str);
    void        announce(void);
   
private:
    std::string _name;
    bool        only_alpha(std::string str);
};

#endif

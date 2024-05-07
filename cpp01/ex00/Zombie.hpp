#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string Name;
    public:
        void announce(void);
        Zombie(std::string Name);
        Zombie();
        ~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif
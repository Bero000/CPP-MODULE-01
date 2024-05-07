#include "Zombie.hpp"

Zombie::Zombie(std::string name) : Name(name)
{
    std::cout << Name << ": zombiyi yarattim(opsiyonel)." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << Name << ": yikildi knkssss." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
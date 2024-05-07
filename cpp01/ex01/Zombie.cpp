#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout<< Name << " BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
    std::cout<< Name << " yik ulaan yiikk"<<std::endl;
}
void Zombie::setName(std::string str)
{
    this->Name=str;
}
#include "HumanB.hpp"

HumanB::HumanB(std::string Name)
{
    this->name = Name;
    this->type = NULL;
}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &Type)
{
    this->type = &Type;
}
void HumanB::attack()
{
       std::cout<< this->name + " " << this->type->getType()<< std::endl;
}

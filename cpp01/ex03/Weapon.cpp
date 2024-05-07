#include "Weapon.hpp"

Weapon::Weapon(std::string weaponName)
{
    this->type = weaponName;
}

Weapon::~Weapon()
{}

void Weapon::setType(std::string str)
{
    this->type = str;
}

const std::string &Weapon::getType()
{
    return (this->type);
}

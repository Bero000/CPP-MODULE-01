#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &Type):name(Name),type(Type)
{}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout<< this->name + " " << this->type.getType() << std::endl;
}
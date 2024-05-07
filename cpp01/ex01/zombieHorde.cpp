#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* Bihter = new Zombie[N];
    for(int i = 0; i < N; i++)
        Bihter[i].setName(name);
    return Bihter;
}
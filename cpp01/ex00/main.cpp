#include "Zombie.hpp"


int main()
{
    {
        Zombie zombieSu("Su\'cuk");
        zombieSu.announce();
    }
    {
        Zombie *zombieCan = newZombie("Cano");
        zombieCan->announce();
        delete(zombieCan);
    }
    {
        randomChump("Bihter");
        
    }
}
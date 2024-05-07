#include "Harl.hpp"

int main(int ac, char **av)
{
    std::string level;
    Harl MrHarlo;
    if (ac == 2)
    {
        level = av[1];
        MrHarlo.complain(level);
    }
    else
        std::cout<<"Wrong ARG."<<std::endl;
}
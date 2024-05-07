#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl MrHarlo;
    if (ac == 2)
    {
        std::string level = av[1];
        MrHarlo.complain(level);
    }
    else
        std::cout<<"Wrong ARG."<<std::endl;
}
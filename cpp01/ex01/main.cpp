#include "Zombie.hpp"
int main()
{
    std::string str;
    std::string count;
    int x;

    do
    {
        std::cout<< "Enter a Zombie name = ";
        std::getline(std::cin, str);
        if (str.empty())
            std::cout << "Zombie name can't be empty"<<std::endl;
    } while (str.empty());
    

    do
    {
        std::cout<< "Enter a count = ";
        std::getline(std::cin, count);
        x = atoi(count.c_str());
        if (count.empty())
        {
            std::cout << "Zombie count can't be empty"<<std::endl;
            continue;
        }
        if (x < 0)
            std::cout<< "Wrong argument"<< std::endl;
        else if (x == 0)
            std::cout<< "Zombie count can't be 0"<< std::endl;
        else if (x > 2147483647)
            std::cout<< "U can't enter MAX_INT"<< std::endl;
    }while(count.empty());

    if (1)
    {
        Zombie* sucuk = zombieHorde(x, str);
        for(int i = 0; i < x; i++)
            sucuk->announce();
        delete []sucuk;
    }
}
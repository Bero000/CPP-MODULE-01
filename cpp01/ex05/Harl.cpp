#include "Harl.hpp"

void Harl::debug(){
    std::cout<<"<< DEBUG >>"<<std::endl;
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."<<std::endl;
    std::cout<<"I really do!"<<std::endl;
}

void Harl::info(){
    std::cout<<"<< INFO >>"<<std::endl;
    std::cout<<"I cannot believe adding extra bacon costs more money."<<std::endl;
    std::cout<<"You didn't put enough bacon in my burger!"<<std::endl;
    std::cout<<"If you did, I wouldn't be asking for more!"<<std::endl;
}

void Harl::warning(){
    std::cout<<"<< WARNING >>"<<std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free."<<std::endl;
    std::cout<<"I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error(){
    std::cout<<"<< ERROR >>"<<std::endl;
    std::cout<<"This is unacceptable!"<<std::endl;
    std::cout<<"I want to speak to the manager now."<<std::endl;
}

void Harl::fatality(){
    std::cout<< "Yanlis babbaa.."<<std::endl;
}
void Harl::complain(std::string level)
{
    void (Harl::*ptr[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::fatality};
    int i = 0;
    std::string bihter[]={"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i != 4 && bihter[i].compare(level))
        i++;
    if(i < 5)
        (this->*ptr[i])();
}
#include <iostream>

int main()
{
    std::string myStr = "HI THIS IS BRAIN";
    std::string *stringPTR = &myStr;
    std::string &stringREF = myStr;

    {
        std::cout<<"mySTR & = " <<&myStr <<std::endl;
        std::cout<<"stringPTR & = " <<stringPTR <<std::endl;
        std::cout<<"stringREF & = " <<&stringREF <<std::endl;
    }
    std::cout<<"\n";
    {
        std::cout<<"mySTR = " <<myStr <<std::endl;
        std::cout<<"stringPTR  = " <<*stringPTR <<std::endl;
        std::cout<<"stringREF  = " <<stringREF <<std::endl;
    }
}
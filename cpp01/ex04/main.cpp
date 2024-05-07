#include <iostream>
#include <fstream>
#include <string>

std::string r_given_arg(std::string line, std::string str1, std::string str2)
{
    size_t str_len1 = str1.length();
    size_t str_len2 = str2.length();
    size_t position = line.find(str1);

    while (position != std::string::npos)
    {
        line.erase(position, str_len1);
        line.insert(position, str2);
        position = line.find(str1, position+str_len2);
    }
    return (line);
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string s_filename = av[1];
        std::string str1 = av[2];
        std::string str2 = av[3];
        std::string d_filename = s_filename.substr(0, s_filename.size()) + ".replace";
        if (!str1.compare(str2))
            return (std::cout<< "There is nothing to change."<<std::endl, 1);
        std::ifstream input(s_filename);
        if (!input.is_open())
            return (std::cout<< "Input file can't be open."<<std::endl, 1);
        std::ofstream output(d_filename);
        if (!output.is_open())
        {
            input.close();
            return (std::cout<< "Output file can't be open."<<std::endl, 1);
        }
        if (input.is_open() && output.is_open())
        {
            std::string line;
            while (std::getline(input, line))
                output<<r_given_arg(line, str1, str2)<< std::endl;
        }
        input.close();
        output.close();
    }
    else
        return (std::cout <<"Wrong arg."<<std::endl, 1);
}
















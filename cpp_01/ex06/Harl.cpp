#include "Harl.hpp"

Harl::Harl(){
    return ;
}

void	Harl::debug( void ){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ){
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string options[4] = {"debug", "info", "warning", "error"};
    
    int op = 4;
    for (int i = 0; i < 4; i++)
    {
        if (!options[i].compare(level))
            op = i;
    }
    switch (op){
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
             break ;
        default:
            std::cout << "Invalid option, try again! Available options: debug, info, warning, error";
    }
}

Harl::~Harl(){
    return ;
}

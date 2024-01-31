#include "Harl.hpp"

int main(int ac, char **av){
    Harl    harl;
    if (ac < 2)
    {
        std::cout << "error";
    }
    harl.complain(av[1]);
}
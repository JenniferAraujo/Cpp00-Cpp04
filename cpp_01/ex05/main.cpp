#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    harl;

    if (ac != 2)
    {
        std::cout << "Please choose one of the valid options: debug, info, warning or error!" << std::endl;
        return 0;
    }
    harl.complain(av[1]);
}

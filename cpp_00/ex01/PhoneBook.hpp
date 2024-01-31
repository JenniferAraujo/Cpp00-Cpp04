#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <string>
#include <unistd.h>
#include "Contact.hpp"

class PhoneBook{
    private:
		int	i;
        Contact contact[8];
public:
    void    add(void);
    void    search(void);
};

#endif

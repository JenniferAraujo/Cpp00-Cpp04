#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal {
public:
    Dog(); // Constructor
    Dog(const Dog& copy);//Copy constructor
    Dog& operator= (const Dog& copy); //Copy assignment constructor
    ~Dog(); // Destructor

private:
};

#endif

#ifndef CAT_H
# define CAT_H

# include "Dog.hpp"

class Cat : public Animal {
public:
    Cat(); // Constructor
    Cat(const Cat& copy);//Copy constructor
    Cat& operator= (const Cat& copy); //Copy assignment constructor
    ~Cat(); // Destructor

private:
};

#endif

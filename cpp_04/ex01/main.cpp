# include "./includes/Animal.hpp"
# include "./includes/Cat.hpp"
# include "./includes/Dog.hpp"
# include "./includes/WrongAnimal.hpp"
# include "./includes/WrongCat.hpp"
#include "./includes/Brain.hpp"

int main(void)
{
	std::cout << "\e[1;34mConstructing\e[1;34m" << RESET << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const	Brain *teste = new Brain();

	std::cout << "\n\e[1;34mTests\e[1;34m" << RESET << std::endl; 
	std::cout << dog->getType() << " says: ";
	dog->makeSound();
	std::cout << cat->getType() << " says: ";
	cat->makeSound();

	animal->makeSound();

	std::cout << "\n\e[1;34mDeconstructing\e[1;34m" << std::endl;
	delete animal;
	delete dog;
	delete cat;

	std::cout << "\n\e[1;31m ** Wrong Animals **\e[1;34m" << RESET << std::endl << std::endl;
	
	std::cout << "\e[1;34mConstructing\e[1;34m" << RESET << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "\n\e[1;34mTests\e[1;34m" << RESET << std::endl; 
	std::cout << wrongCat->getType() << " says: ";
	wrongCat->makeSound();
	std::cout << wrongMeta->getType() << " says: ";
	wrongMeta->makeSound();

	std::cout << "\n\e[1;34mDeconstructing\e[1;34m" << std::endl;
	delete wrongMeta;
	delete wrongCat;

	return (0);
}

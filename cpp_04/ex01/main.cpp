# include "./includes/Animal.hpp"
# include "./includes/Cat.hpp"
# include "./includes/Dog.hpp"
# include "./includes/WrongAnimal.hpp"
# include "./includes/WrongCat.hpp"
# include "./includes/Brain.hpp"

void	testDeepCopy(const Dog& originalDog)
{
	originalDog.getBrain()->setIdea(0, "Original idea");

	Dog copiedDog = originalDog;
	copiedDog.makeSound();

	std::cout << "\nOriginal Dog idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Dog idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;
}

int	main(void)
{
	std::cout << "\n\e[1;34mConstructors and destructors\e[1;34m" << RESET << std::endl; 
	{
		Dog dog;
		Cat cat;
		dog.makeSound();
		cat.makeSound();
	}
	std::cout << "\n\e[1;34mTesting deep copy\e[1;34m" << RESET << std::endl; 
	Dog originalDog;
	testDeepCopy(originalDog);

	std::cout << "\n\e[1;34mTesting array of animals\e[1;34m" << RESET << std::endl; 
	const int numAnimals = 4;
	Animal* animals[numAnimals];

	for (int i = 0; i < numAnimals / 2; ++i)
		animals[i] = new Dog();
	for (int i = numAnimals / 2; i < numAnimals; ++i)
		animals[i] = new Cat();
	for (int i = 0; i < numAnimals; ++i)
		animals[i]->makeSound();

	std::cout << "\n\e[1;34mDeconstructing\e[1;34m" << std::endl;
	for (int i = 0; i < numAnimals; ++i)
		delete animals[i];
	return (0);
}


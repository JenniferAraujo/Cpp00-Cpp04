# include "./includes/Animal.hpp"
# include "./includes/Cat.hpp"
# include "./includes/Dog.hpp"
# include "./includes/WrongAnimal.hpp"
# include "./includes/WrongCat.hpp"
# include "./includes/Brain.hpp"

void testDeepCopy(const Dog& originalDog)
{
    Dog copiedDog = originalDog;
    copiedDog.makeSound();

    if (originalDog.getBrain() && copiedDog.getBrain()) {
        originalDog.getBrain()->setIdea(0, "Original idea");
        copiedDog.getBrain()->setIdea(0, "Copied idea");
        std::cout << "Original Dog idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied Dog idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;
    }
}

void testAssignmentOperator()
{
    Cat cat1;
    if (cat1.getBrain()) {
        cat1.getBrain()->setIdea(0, "Cat1's idea");
    }

    Cat cat2;
    if (cat2.getBrain()) {
        cat2.getBrain()->setIdea(0, "Cat2's idea");
    }

    std::cout << "Before assignment: " << std::endl;
    if (cat1.getBrain() && cat2.getBrain()) {
        std::cout << "Cat1's idea: " << cat1.getBrain()->getIdea(0) << std::endl;
        std::cout << "Cat2's idea: " << cat2.getBrain()->getIdea(0) << std::endl;
    }

    cat2 = cat1;

    std::cout << "After assignment: " << std::endl;
    if (cat1.getBrain() && cat2.getBrain()) {
        std::cout << "Cat1's idea: " << cat1.getBrain()->getIdea(0) << std::endl;
        std::cout << "Cat2's idea: " << cat2.getBrain()->getIdea(0) << std::endl;
    }

    if (cat1.getBrain()) {
        cat1.getBrain()->setIdea(0, "Modified Cat1's idea");
    }

    std::cout << "After modifying Cat1's idea: " << std::endl;
    if (cat1.getBrain() && cat2.getBrain()) {
        std::cout << "Cat1's idea: " << cat1.getBrain()->getIdea(0) << std::endl;
        std::cout << "Cat2's idea: " << cat2.getBrain()->getIdea(0) << std::endl;
    }
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

	std::cout << "\n\e[1;34mTesting assignment operator\e[1;34m" << RESET << std::endl; 
    testAssignmentOperator();

	std::cout << "\n\e[1;34mTesting array of animals\e[1;34m" << RESET << std::endl; 
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < numAnimals; ++i) {
        animals[i]->makeSound();
    }

	std::cout << "\n\e[1;34mDeconstructing\e[1;34m" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }
    return (0);
}

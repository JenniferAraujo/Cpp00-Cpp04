#include <iostream>

int main(void)
{
    std::string original = "HI THIS IS BRAIN";
    std::string *stringPTR = &original; /*ponteiro p str*/
    std::string &stringREF = original; /*ponteiro p ref*/

    std::cout << "original: " << &original << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl << std::endl;

    std::cout << "original: " << original << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
}
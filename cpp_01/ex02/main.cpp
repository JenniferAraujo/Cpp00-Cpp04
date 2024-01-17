#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <string>
#include <unistd.h>


int main(void){
    std::string original = "HI THIS IS BRAIN";
    std::string *stringPTR = &original;
    std::string &stringREF = original;

    std::cout << "original: " << &original << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl;

    std::cout << "original: " << original << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
}
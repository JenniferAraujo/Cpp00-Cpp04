#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
}

PhoneBook::~PhoneBook() {}

void    PhoneBook::add(void){
	std::string first, last, nick, num, ds;

	std::system("clear");
	std::cout << "*-----*-----*-----*-----*-----*\n";
	std::cout << "*         ADD  CONTACT        *\n";
	std::cout << "*-----*-----*-----*-----*-----*\n\n";
	std::cout << "First Name: ";
	std::getline(std::cin, first);
	if (std::cin.eof())
		exit(0);
	std::cout << "Last Name: ";
	std::getline(std::cin, last);
	if (std::cin.eof())
		exit(0);
	std::cout << "Nickname: ";
	std::getline(std::cin, nick);
	if (std::cin.eof())
		exit(0);
	std::cout << "Number: ";
	std::getline(std::cin, num);
	if (std::cin.eof())
		exit(0);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, ds);
	if (std::cin.eof())
		exit(0);
	 
	 if (first.empty() || last.empty() || nick.empty() || num.empty() || ds.empty()){
		std::system("clear");
		std::cout << std::endl << "ERROR: EMPTY PARAMETER! " << std::endl;
		return ;
	 }
	 if (validation_digits(num)){
		std::cout << std::endl << "ERROR: INVALID NUMBER! " << std::endl;
		return ;
	 }
	 this->contact[i++ % 8] = Contact(first, last, nick, num, ds);
	 std::system("clear");
	 std::cout << "*-----*-----* CONTACT ADDED TO PHONEBOOK *-----*-----*\n";
}

void    PhoneBook::search(void){
	std::string str;
	std::system("clear");
	std::cout << "*-----*-----*-----*-----*-----*\n";
	std::cout << "*           SEARCH            *\n";
	std::cout << "*-----*-----*-----*-----*-----*\n\n";
	std::cout << "\t|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "\t|" <<  std::setw(10) << i + 1 << "|" << std::setw(10) << this->contact[i].get_fields(1) << "|" << std::setw(10) << this->contact[i].get_fields(2) << "|" << std::setw(10) << this->contact[i].get_fields(3) << "|" << std::endl;
	}
	std::cout << "Choose a index: " << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit(0);
	int index = atoi(str.c_str());
	if (index < 1 || index > 8){
		std::cout << "Error: invalid index!" << std::endl;
		return ;
	}
	this->contact[index - 1].print();
}

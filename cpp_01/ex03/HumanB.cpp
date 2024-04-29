#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL){
	return ;
}

void	HumanB::setWeapon(Weapon& weaponType){
	this->_weapon = &weaponType;
	return ;
}

void	HumanB::attack(){
	if (!_weapon)
		std::cout << this->_name << " is a pacifist... for now" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB(){
	return ;
}

#include "Weapon.hpp"

Weapon::Weapon(){
	return ;
}

Weapon::Weapon(std::string weaponType): _type(weaponType){
	return ;
}

const std::string&	Weapon::getType(){
	return (this->_type);
}

void	Weapon::setType(std::string newType){
	this->_type = newType;
	return ;
}

Weapon::~Weapon(){
	return ;
}


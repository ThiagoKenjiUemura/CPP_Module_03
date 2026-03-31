#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " was assembled! (Default)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap " << this->_name << " was duplicated!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "FragTrap " << this->_name << " data assigned!" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " exploded into pieces! (Destructor)" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " drops into the battlefield!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hitPoints == 0) {
		std::cout << "FragTrap " << this->_name << " cannot high five, it is completely broken." << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " enthusiastically requests a high five! ✋" << std::endl;
}

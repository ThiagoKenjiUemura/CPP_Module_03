#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " has been created! (Default Constructor)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap " << this->_name << " has been copied! (Copy Constructor)" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << this->_name << " has been assigned! (Assignment Operator)" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed! (Destructor)" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is born, ready for battle!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack! No hit points or energy left." << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ClapTrp " << this->_name << " attacks " << target << ", causing "<< this->_attackDamage << " points of damage!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0) 
	{
		std::cout << "ClapTrap " << this->_name << " is already completely broken..." << std::endl;
		return;
	}
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage! Hit points left: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't repair itself! No hit points or energy left." << std::endl;
		return;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " repaired itself for " << amount << " hit points! Hit points now: " << this->_hitPoints << std::endl;
}

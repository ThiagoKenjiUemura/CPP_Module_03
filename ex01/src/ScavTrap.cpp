#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " emerged from the shadows! (Default)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap " << this->_name << " has been cloned!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "ScavTrap " << this->_name << " data assigned!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " melted down into scrap! (Destructor)" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " is online and ready for heavy duty!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0) {
		std::cout << "ScavTrap " << this->_name << " is out of juice or broken!" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " viciously strikes " << target << ", dealing " << this->_attackDamage << " massive damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_hitPoints == 0) {
		std::cout << "ScavTrap " << this->_name << " is too broken to guard anything." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode. None shall pass!" << std::endl;
}
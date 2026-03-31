#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap bot;
	ScavTrap knight("Knight");
	knight.attack("Goblin");
	knight.takeDamage(30);
	knight.beRepaired(15);
	knight.guardGate();
	ScavTrap shadowKnight(knight);
	return 0;
}

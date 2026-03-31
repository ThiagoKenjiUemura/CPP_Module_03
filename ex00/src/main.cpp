#include "ClapTrap.hpp"
#include <iostream>

int main(void) 
{
	ClapTrap wizard("Wizard");
	wizard.attack("Witch");
	wizard.takeDamage(5);
	wizard.beRepaired(3);
	wizard.takeDamage(20);
	wizard.attack("Witch");
	wizard.beRepaired(5);
	ClapTrap clone(wizard);
	return 0;
}
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap bot;
	FragTrap paladin("Paladin");
	paladin.attack("Orc");
	paladin.takeDamage(40);
	paladin.beRepaired(20);
	paladin.highFivesGuys();
	FragTrap shadowPaladin(paladin);
	return 0;
}

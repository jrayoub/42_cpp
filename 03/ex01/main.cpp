#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <sstream>

int main(void)
{
	ScavTrap one("NAME");
	one.attack("banney");
	for (int i = 0; i < 7; i++)
	{
		one.beRepaired(i);
	}
	for (int i = 0; i < 7; i++)
	{
		std::ostringstream oss;
		oss << "enemy_" << i;
		one.attack(oss.str());
		oss.clear();
	}
	one.takeDamage(100);
	one.guardGate();
	return (0);
}

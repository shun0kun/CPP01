#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( const std::string &name ) : name_( name ), weapon_( NULL )
{
}

void	HumanB::attack() const
{
	if (!weapon_)
		return ;
	std::cout << name_ << " attacks with their " << weapon_->getType() << '\n';
}

void	HumanB::setWeapon( Weapon &weapon )
{
	weapon_ = &weapon;
}

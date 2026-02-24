#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie( void )
{
}

Zombie::Zombie( const std::string& name ) : name_( name )
{
}

Zombie::~Zombie( void )
{
	std::cout << name_ << std::endl;
}

void	Zombie::setName( const std::string& name )
{
	name_ = name;
}

void	Zombie::announce( void )
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

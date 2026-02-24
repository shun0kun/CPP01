#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie( const std::string& name ) : name_( name )
{
}

Zombie::~Zombie()
{
	std::cout << name_ << std::endl;
}

void	Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

#include "Zombie.hpp"

int	main( void )
{
	randomChump( "Bob" );

	Zombie	*z = newZombie( "Mike" );
	z->announce();
	delete z;

	return 0;
}

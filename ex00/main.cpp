#include "Zombie.hpp"

int	main()
{
	randomChump( "Bob" );

	Zombie	*z = newZombie( "Mike" );
	z->announce();
	delete z;

	return 0;
}

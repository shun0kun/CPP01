#include "Harl.hpp"
#include <string>
#include <iostream>

int	main( int argc, char **argv )
{
	static const std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	static const int			n_levels = sizeof( levels ) / sizeof( levels[0] );

	if ( argc != 2 )
	{
		std::cerr << "Error: Only one argument can be accepted" << std::endl;
		return 1;
	}

	int	i = 0;
	std::string	input( argv[1] );
	while ( i < n_levels )
	{
		if ( levels[i] == input )
			break ;
		i++;
	}

	Harl	harl;
	switch ( i )
	{
		case 0:
			harl.complain( levels[0] );
			// fall through
		case 1:
			harl.complain( levels[1] );
			// fall through
		case 2:
			harl.complain( levels[2] );
			// fall through
		case 3:
			harl.complain( levels[3] );
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return 0;
}

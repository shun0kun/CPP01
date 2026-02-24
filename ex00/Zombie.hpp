#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
	public:
		Zombie( const std::string& name );
		~Zombie();
		void	announce( void );

	private:
		Zombie( void );
		std::string	name_;
};

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );

#endif

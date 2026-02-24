#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
	public:
		Zombie();
		Zombie( const std::string& name );
		~Zombie();
		void	setName( const std::string& name );
		void	announce();

	private:
		std::string	name_;
};

Zombie	*zombieHorde( int N, std::string name );

#endif

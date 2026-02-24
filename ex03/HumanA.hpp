#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( const std::string &name, const Weapon &Wepon);
		void	attack( void ) const;

	private:
		std::string	name;
		Weapon		Weapon;
};

#endif

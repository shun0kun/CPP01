#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	public:
		const std::string	&getType( void ) const;
		void				setType( const std::string &val );

	private:
		std::string	type;
};

#endif

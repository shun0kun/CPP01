#include <fstream>
#include <iostream>
#include <string>
#include <iterator>

std::string	getFileContent( std::istream &file )
{
	return std::string(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>());
}

void	replace( std::string &content, const std::string &s1, const std::string &s2 )
{
	size_t	pos;

	if (s1.empty())
		return ;
	pos = 0;
	while ( true )
	{
		pos = content.find( s1, pos );
		if (pos == std::string::npos)
			break ;
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
}

int	main( int argc, char **argv )
{
	if ( argc != 4 )
		return 1;

	std::ifstream	in( argv[1] );
	if ( !in.is_open() )
	{
		std::cerr << argv[1] << ": file open failed" << std::endl;
		return 1;
	}

	std::string	content = getFileContent( in );
	replace( content, argv[2], argv[3] );
	
	std::string	out_name = std::string( argv[1] ) + ".replace";
	std::ofstream	out( out_name.c_str() );
	if ( !out.is_open() )
	{
		std::cerr << out_name << ": file open failed" << std::endl;
		return 1;		
	}

	out << content;

	return 0;
}

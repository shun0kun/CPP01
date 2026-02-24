#include <fstream>
#include <iostream>
#include <string>

std::string	getFileContent( std::istream &file )
{
	std::string	content;

	char	c;
	while ( file.get(c) )
	{
		content += c;
	}
	return content;
}

void	replace( std::string &content, const std::string &s1, const std::string &s2 )
{
	size_t	pos;

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
	if ( !in )
	{
		std::cerr << argv[1] << ": file open failed" << std::endl;
		return 1;
	}
	std::string	content = getFileContent( in );
	in.close();

	replace(content, argv[2], argv[3]);
	
	std::string	out_name = std::string( argv[1] ) + ".replace";
	std::ofstream	out( out_name.c_str() );
	if (!out)
	{
		std::cerr << argv[1] << ": file open failed" << std::endl;
		return 1;		
	}
	out << content;
	out.close();

	return 0;
}

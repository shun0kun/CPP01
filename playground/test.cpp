#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	
	std::ifstream	in("file");
	if (!in.is_open())
	{
		std::cerr << "File open failed" << std::endl;
		return 1;
	}

	std::string	line;
	while (std::getline(in, line))
	{
		std::cout << line;
		if (!in.eof())
			std::cout << '\n';
	}
	
	return 0;
}

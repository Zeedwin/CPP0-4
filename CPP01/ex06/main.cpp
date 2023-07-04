#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl 	h;
	if(ac == 2)
	{
		int level = 4;
		std::string	levels[4] = {"DEBUG",
								"INFO",
								"WARNING",
								"ERRROR"};
		for (int i = 0; i < 4; i++)
		{
			if (av[1] == levels[i])
			{
				level = i;
				break;
			}
		}
		switch (level)
		{
		case 0:
			std::cout << "[DEBUG]\n";
			h.complain("DEBUG");
			std::cout << "\n";
		case 1:
			std::cout << "[INFO]\n";
			h.complain("INFO");
			std::cout << "\n";
		case 2:
			std::cout << "[WARNING]\n";
			h.complain("WARNING");
			std::cout << "\n";
		case 3:
			std::cout << "[ERROR]\n";
			h.complain("ERROR");
			std::cout << "\n";
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
		}
	}
	else
		std::cout << "Error: wrong arguments\n";
}
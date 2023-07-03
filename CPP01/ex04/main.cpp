#include "sed.hpp"

int main(int ac, char **av)
{
	(void)ac;
	std::string search = av[2];
	std::string replace = av[3];
	std::ifstream	file(av[1]);
	size_t pos = 0;
	 if (file.is_open()) {
        std::string line;
        while (std::getline(file, line))
		{
            while((pos = line.find(search, pos))!= std::string::npos)
			{
				line.erase(pos, search.size());
				std::cout << pos << "Gay\n";
				line.insert(pos, replace);
				std::cout << pos << "\n";
				pos += 1;
			}
			std::cout << line << "\n";
        }
        file.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    return 0; 
}
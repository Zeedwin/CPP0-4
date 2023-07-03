#include "sed.hpp"

int main(int ac, char **av)
{
	(void)ac;
	std::string search = av[2];
	std::string replace = av[3];
	std::string filename = av[1];
	std::ifstream	file(av[1]);
	filename += ".replace";
	std::ofstream	ofs(filename.c_str());
	size_t pos = 0;
	 if (file.is_open()) {
        std::string line;
        while (std::getline(file, line))
		{
            while((pos = line.find(search, pos))!= std::string::npos)
			{
				std::cout << line << "\n";
				line.erase(pos, search.size());
				line.insert(pos, replace);
				pos += 1;
			}
			ofs << line;
			std::cout << line << "\n";
        }
        file.close();
		ofs.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    return 0; 
}
#include "sed.hpp"

int main(int ac, char **av)
{
	(void)ac;
	std::ifstream	file(av[1]);

	 if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    return 0; 
}
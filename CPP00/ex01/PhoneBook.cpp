#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : ind(0) {
	
}

void PhoneBook::handle_input()
{
	Contact	cnt;

	std::cout << "\033[1;90m*********************************" << "\n";
	std::cout << "\033[1;90m*                               *" << "\n";
	std::cout << "\033[1;90m*           \033[1;35mPhoneBook          \033[1;90m *" << "\n";
	std::cout << "\033[1;90m*                               *" << "\n";
	std::cout << "\033[1;90m*********************************" << "\n";
	std::cout << "\n" << "\033[1;97mWelcome to your \033[1;35mPhoneBook\033[1;97m, would you like to?" << "\n" << "\033[1;32mAdd \033[0ma contact: \"ADD\"" << "\n";
	std::cout << "\033[1;36mSearch \033[0ma contact: \"SEARCH\"" << "\n" << "\033[1;31mExit \033[0mthe \033[1;35mPhoneBook\033[0m: \"EXIT\"" << "\n";
	while("Let's love Lain")
	{
		std::string	input;

		std::cout << "cmd:";
		if(!std::getline(std::cin, input))
			exit(0);
		for (int j = 0; input[j]; ++j)
			input[j] = toupper(input[j]);
		if(input == "ADD") 
		{
			cont[ind].add_contact();
			if(ind < 7)
				++ind;
			else
				ind = 0;
		}
		else if(input == "SEARCH")
			search_contact(ind);
		else if(input == "LAIN")
			std::cout << "Let's love Lain" << "\n";
		else if(input == "EXIT")
			exit(0);
		else
		{
			std::cout << "\033[1;31mCommand not Found\033[1;30m" << "\n";
			cnt.print_promt();
		}
	}
}
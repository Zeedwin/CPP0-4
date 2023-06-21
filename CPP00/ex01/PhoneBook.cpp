#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : ind(0) {
	
}

void PhoneBook::handle_input()
{
	Contacts	cnt;

	cout << "\033[1;90m*********************************" << std::endl;
	cout << "\033[1;90m*                               *" << std::endl;
	cout << "\033[1;90m*           \033[1;35mPhoneBook          \033[1;90m *" << std::endl;
	cout << "\033[1;90m*                               *" << std::endl;
	cout << "\033[1;90m*********************************" << std::endl;
	cout << endl << "\033[1;97mWelcome to your \033[1;35mPhoneBook\033[1;97m, would you like to?" << endl << "\033[1;32mAdd \033[0ma contact: \"ADD\"" << endl;
	cout << "\033[1;36mSearch \033[0ma contact: \"SEARCH\"" << endl << "\033[1;31mExit \033[0mthe \033[1;35mPhoneBook\033[0m: \"EXIT\"" << endl;
	while("Let's love Lain")
	{
		string	input;

		if(!getline(cin, input))
			exit(0);
		for (int j = 0; input[j]; ++j)
			input[j] = toupper(input[j]);
		if(input == "ADD") 
		{
			cont[ind].add_contact();
			if(ind != 7)
				++ind;
			else
				ind = 0;
		}
		else if(input == "SEARCH")
			search_contact(ind);
		else if(input == "LAIN")
			cout << "Let's love Lain" << endl;
		else if(input == "EXIT")
			exit(0);
		else
		{
			cout << "\033[1;31mCommand not Found\033[1;30m" << "\n";
			cnt.print_promt();
		}
	}
}
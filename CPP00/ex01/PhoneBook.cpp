#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : ind(0) {
	
}

void PhoneBook::handle_input()
{
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
		Contacts	cont;
		PhoneBook	phb;

		if(!getline(cin, input))
			exit(0);
		for (int j = 0; input[j]; ++j)
			input[j] = toupper(input[j]);
		if(input == "ADD") 
			ind = cont.add_contact(ind);
		if(input == "SEARCH")
			cont.search_contact(ind, phb);
		if(input == "LAIN")
			cout << "Let's love Lain" << endl;
		if(input == "EXIT")
			exit(0);
	}
}
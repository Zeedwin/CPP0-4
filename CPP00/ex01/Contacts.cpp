#include "Contacts.hpp"
#include "PhoneBook.hpp"
#include <cctype>

Contact::Contact() {
	
}

int Contact::is_str_digit(std::string str) {
	for (size_t i = 0; i < str.size(); i++)
	{
		if(!isdigit(str[i]))
			return 0;
	}
	return 1;
}

std::string Contact::store_string(std::string str) {
std::string	line;

while (line.empty())
{
	std::cout << str << "\n";
	if(!std::getline(std::cin, line))
		exit(0);
}
return line;
}

std::string Contact::store_phone(std::string str) {
std::string	line;

while (line.empty())
{
	std::cout << str << "\n";
	if(!std::getline(std::cin, line))
		exit(0);
	if(is_str_digit(line) == 0 || line.length() > 10)
	{
		std::cout << "\nError: Not a valid Number" << "\n";
		line.clear();
	}
}
return line;
}


void Contact::save_contact(std::string fname,
							std::string lname,
							std::string nname,
							std::string pnum,
							std::string dsecret) {
	this->firstname = fname;
	this->lastname = lname;
	this->nickname = nname;
	this->phonenumber = pnum;
	this->darkestsecret = dsecret;
}

void Contact::add_contact()
{
	std::string	line;

	std::cout << "\033[32m*New Contact*\033[0m" << "\n";
	firstname = store_string("Enter your FirstName:");
	lastname = store_string("Enter your LastName:");
	nickname = store_string("Enter your NickName:");
	phonenumber = store_phone("Enter your PhoneNumber:");
	darkestsecret = store_string("Enter your DarkestSecret:");
	save_contact(firstname, 
									lastname, 
									nickname, 
									phonenumber, 
									darkestsecret);
	std::cout << "\033[32mRegistration is complete\n\033[0m" << "\033[1;97mWhat would you like to do now?" << "\n";
	std::cout << "\033[1;32mAdd \033[0ma contact: \"ADD\"" << "\n";
	std::cout << "\033[1;36mSearch \033[0ma contact: \"SEARCH\"" << "\n" << "\033[1;31mExit \033[0mthe \033[1;35mPhoneBook\033[0m: \"EXIT\"" << "\n";
}

void setw_str(std::string str)
{
	
	if(str.length() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	std::cout << std::setw(10);
	std::cout << str << "|";
}

void	PhoneBook::search_contact(int index)
{
	int i = 0;
	std::string	line;
	Contact	cnt;
	(void)index;

	std::cout << "____________________________________________" << "\n";
	setw_str("Index");
	setw_str("FirstName");
	setw_str("LastName");
	setw_str("NickName");
	std::cout << "\n";
		if(cont[i].is_empty())
		{
			std::cout << "\n There is no contacts currently registered" << "\n\n";
			cnt.print_promt();
			return;
		}
	while(i != 8 && !cont[i].is_empty())
	{
		std::cout << std::setw(10);
		std::cout << i + 1 << "|";
		setw_str(cont[i].get_firstname());
		setw_str(cont[i].get_lastname());
		setw_str(cont[i].get_nickname());
		std::cout << "\n";
		i++;
	}
	while (line.empty())
	{
		int k = -1;

		std::cout << "Enter index" << "\n";
		if(!std::getline(std::cin, line))
			exit(0);
		if(cnt.is_str_digit(line) && line.size() <= 10 && !line.empty())
			k = std::stoi(line);
		if(k > 0 && k <= 8 && !cont[k - 1].is_empty())
		{
			std::cout << "\033[1;33m* Contact's Full informations *" << "\n";
			std::cout << "\033[0mFirstName:" << cont[k - 1].get_firstname() << "\n";
			std::cout << "LastName:" << cont[k - 1].get_lastname() << "\n";
			std::cout << "NickName:" << cont[k - 1].get_nickname() << "\n";
			std::cout << "PhoneNumber:" << cont[k - 1].get_phonenumber() << "\n";
			std::cout << "DarkestSecret:" << cont[k - 1].get_darksecret() << "\n";
			cnt.print_promt();
		}
		else
		{
			std::cout << "Error: Use a valid Index between 1 and " << 8 << "\n";
			line.clear();
		}
	}
	
	/*for (index = 0; phb.ind != 0; index++)
	{
	}*/

}

void Contact::print_promt() {
	std::cout << "\033[1;97mWhat would you like to do?" << "\n";
	std::cout << "\033[1;32mAdd \033[0ma contact: \"ADD\"" << "\n";
	std::cout << "\033[1;36mSearch \033[0ma contact: \"SEARCH\"" << "\n" << "\033[1;31mExit \033[0mthe \033[1;35mPhoneBook\033[0m: \"EXIT\"" << "\n";
}

std::string	Contact::get_firstname()
{
	return this->firstname;
}

std::string	Contact::get_lastname()
{
	return this->lastname;
}

std::string	Contact::get_nickname()
{
	return this->nickname;
}
std::string	Contact::get_phonenumber()
{
	return this->phonenumber;
}

std::string	Contact::get_darksecret()
{
	return this->darkestsecret;
}

bool Contact::is_empty() {
	return this->firstname.empty();
}

void Contact::display_contact(int index){
	PhoneBook	phb;

	std::cout << index << "\n";
	//std::cout << "autism" << "\n";
}

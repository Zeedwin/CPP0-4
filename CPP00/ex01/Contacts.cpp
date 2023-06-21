#include "Contacts.hpp"
#include "PhoneBook.hpp"
#include <cctype>

Contacts::Contacts() {
	
}

int Contacts::is_str_digit(string str) {
	for (size_t i = 0; i < str.size(); i++)
	{
		if(!isdigit(str[i]))
			return 0;
	}
	return 1;
}

string Contacts::store_string(string str) {
string	line;

while (line.empty())
{
	cout << str << endl;
	if(!getline(cin, line))
		exit(0);
}
return line;
}

string Contacts::store_phone(string str) {
string	line;

while (line.empty())
{
	cout << str << endl;
	if(!getline(cin, line))
		exit(0);
	if(is_str_digit(line) == 0)
	{
		cout << "Error: not a number" << "\n";
		line.clear();
	}
}
return line;
}


void Contacts::save_contact(string fname,
							string lname,
							string nname,
							string pnum,
							string dsecret) {
	this->firstname = fname;
	this->lastname = lname;
	this->nickname = nname;
	this->phonenumber = pnum;
	this->darkestsecret = dsecret;
}

bool containsOnlyNumbers(const std::string& str) {
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        if (!std::isdigit(static_cast<int>(str[i]))) {
            return false;
        }
    }
    return true;
}

void Contacts::add_contact()
{
	string	line;

	cout << "\033[32m*New Contact*\033[0m" << endl;
	firstname = store_string("Enter your firstname:");
	lastname = store_string("Enter your lastname:");
	nickname = store_string("Enter your nickname:");
	phonenumber = store_phone("Enter your phonenumber:");
	darkestsecret = store_string("Enter your darkestsecret:");
	save_contact(firstname, 
									lastname, 
									nickname, 
									phonenumber, 
									darkestsecret);
	cout << "\033[32mRegistration is complete\n\033[0m" << "\033[1;97mWhat would you like to do now?" << endl;
	cout << "\033[1;32mAdd \033[0ma contact: \"ADD\"" << endl;
	cout << "\033[1;36mSearch \033[0ma contact: \"SEARCH\"" << endl << "\033[1;31mExit \033[0mthe \033[1;35mPhoneBook\033[0m: \"EXIT\"" << endl;
}

void setw_str(string str)
{
	
	if(str.length() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	cout << std::setw(10);
	cout << str << "|";
}

void	PhoneBook::search_contact(int index)
{
	int i = 0;
	string	line;
	Contacts	cnt;
	(void)index;

	cout << "____________________________________________" << endl;
	setw_str("Index");
	setw_str("FirstName");
	setw_str("LastName");
	setw_str("NickName");
	cout << "\n";
		if(cont[i].is_empty())
		{
			cout << "\n There is no contacts currently registered" << "\n\n";
			cnt.print_promt();
			return;
		}
	while(i != 8 && !cont[i].is_empty())
	{
		cout << std::setw(10);
		cout << i + 1 << "|";
		setw_str(cont[i].get_firstname());
		setw_str(cont[i].get_lastname());
		setw_str(cont[i].get_nickname());
		cout << "\n";
		i++;
	}
	while (line.empty())
	{
		int k = 0;

		cout << "Enter index" << "\n";
		if(!getline(cin, line))
			exit(0);
		if(cnt.is_str_digit(line) && line.size() <= 10 && !line.empty())
			k = std::stoi(line);
		if(k > 0 && k <= ind)
		{
			cout << "\033[1;33m* Contact's Full informations *" << "\n";
			cout << "\033[0mFirstName:" << cont[k - 1].get_firstname() << "\n";
			cout << "LastName:" << cont[k - 1].get_lastname() << "\n";
			cout << "NickName:" << cont[k - 1].get_nickname() << "\n";
			cout << "PhoneNumber:" << cont[k - 1].get_phonenumber() << "\n";
			cout << "DarkestSecret:" << cont[k - 1].get_darksecret() << "\n";
			cnt.print_promt();
		}
		else
		{
			cout << "Error: Use an Index between 1 and " << ind << "\n";
			line.clear();
		}
	}
	
	/*for (index = 0; phb.ind != 0; index++)
	{
	}*/

}

void Contacts::print_promt() {
	cout << "\033[1;97mWhat would you like to do?" << endl;
	cout << "\033[1;32mAdd \033[0ma contact: \"ADD\"" << endl;
	cout << "\033[1;36mSearch \033[0ma contact: \"SEARCH\"" << endl << "\033[1;31mExit \033[0mthe \033[1;35mPhoneBook\033[0m: \"EXIT\"" << endl;
}

string	Contacts::get_firstname()
{
	return this->firstname;
}

string	Contacts::get_lastname()
{
	return this->lastname;
}

string	Contacts::get_nickname()
{
	return this->nickname;
}
string	Contacts::get_phonenumber()
{
	return this->phonenumber;
}

string	Contacts::get_darksecret()
{
	return this->darkestsecret;
}

bool Contacts::is_empty() {
	return this->firstname.empty();
}

void Contacts::display_contact(int index){
	PhoneBook	phb;

	cout << index << endl;
	//cout << "autism" << endl;
}

#include "Contacts.hpp"
#include "PhoneBook.hpp"
#include <cctype>

Contacts::Contacts() {
	
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
	PhoneBook phb;

	cout << phb.ind << endl;
	cout << "\033[32m*New Contact*\033[0m" << endl;
	firstname = store_string("Enter your firstname:");
	lastname = store_string("Enter your lastname:");
	nickname = store_string("Enter your nickname:");
	
	phonenumber = store_string("Enter your phonenumber:");
	if (containsOnlyNumbers(line) == false)
	{
		cout << "Not a number" << endl;
		return;
	}
	darkestsecret = store_string("Enter your darkestsecret:");
	phb.cont[phb.ind].save_contact(firstname, 
									lastname, 
									nickname, 
									phonenumber, 
									darkestsecret);
	phb.ind += (phb.ind + 1) % 8;
	cout << "\033[32mRegistration is complete\n\033[0m" << "\033[1;97mWhat would you like to do now?" << endl;
	cout << "\033[1;32mAdd \033[0ma contact: \"ADD\"" << endl;
	cout << "\033[1;36mSearch \033[0ma contact: \"SEARCH\"" << endl << "\033[1;31mExit \033[0mthe \033[1;35mPhoneBook\033[0m: \"EXIT\"" << endl;
}
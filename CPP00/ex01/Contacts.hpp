#ifndef CONTACTS_HPP
#define CONTACTS_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact
{
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
public:
void save_contact(std::string fname,
							std::string lname,
							std::string nname,
							std::string pnum,
							std::string dsecret);
	std::string	store_string(std::string str);
	std::string	store_phone(std::string str);
	void add_contact();
	int is_str_digit(std::string str);
	std::string get_firstname();
	void print_promt();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_phonenumber();
	std::string get_darksecret();
	bool is_empty();
	void display_contact(int index);
	Contact();
};


#endif
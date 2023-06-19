#ifndef CONTACTS_HPP
#define CONTACTS_HPP
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <cstdlib>
using std::cin;
using std::cout;
using std::getline;
using std::setw;
using std::right;
using std::string;
using std::endl;

class Contacts
{
private:
	string	firstname;
	string	lastname;
	string	nickname;
	string	phonenumber;
	string	darkestsecret;
	PhoneBook	phb;
void save_contact(string fname,
							string lname,
							string nname,
							string pnum,
							string dsecret);
public:
	string	store_string(string str);
	int add_contact(int index);
	void search_contact(int index);
	void display_contact(int index);
	Contacts(/* args */);
};


#endif
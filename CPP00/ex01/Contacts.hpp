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
public:
void save_contact(string fname,
							string lname,
							string nname,
							string pnum,
							string dsecret);
	string	store_string(string str);
	string	store_phone(string str);
	void add_contact();
	int is_str_digit(string str);
	string get_firstname();
	void print_promt();
	string get_lastname();
	string get_nickname();
	string get_phonenumber();
	string get_darksecret();
	bool is_empty();
	void display_contact(int index);
	Contacts(/* args */);
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:43:10 by jgirard-          #+#    #+#             */
/*   Updated: 2023/06/20 21:57:27 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contacts.hpp"

class PhoneBook
{
public:
	PhoneBook();
	void handle_input();
	int ind;
	void search_contact(int index);
	Contacts	cont[8];
private:
	void search_cmd();
	string adrress_input(string str) const;
	
};




#endif
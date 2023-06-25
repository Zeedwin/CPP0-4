/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:43:10 by jgirard-          #+#    #+#             */
/*   Updated: 2023/06/21 16:36:54 by jgirard-         ###   ########.fr       */
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
	Contact	cont[8];
private:
	void search_cmd();
	std::string adrress_input(std::string str) const;
	
};




#endif
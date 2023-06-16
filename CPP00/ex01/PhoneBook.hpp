/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:43:10 by jgirard-          #+#    #+#             */
/*   Updated: 2023/06/16 02:25:08 by jgirard-         ###   ########.fr       */
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
	Contacts	cont[8];
	int ind;
private:
	void search_cmd();
	string adrress_input(string str) const;
	
};




#endif
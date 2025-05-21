/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:59:14 by flima             #+#    #+#             */
/*   Updated: 2025/05/21 10:51:24 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:46:07 by flima             #+#    #+#             */
/*   Updated: 2025/05/20 09:46:08 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// void Contact::add_new_contact(void)
// {
// 	std::string	contact_field;
	
// 	//condicao para replace o oldest contact
// 	std::cout << "Name: ";
// 	std::cin >> contact_field;
// 	contacts[index % MaxContacts].set_name(contact_field);
// 	std::cout << "Last name: ";
// 	std::cin >> contact_field;
// 	contacts[index % MaxContacts].set_last_name(contact_field);
	
// }

PhoneBook::PhoneBook(void)
{
	std::cout << "\n=========================================================\n";
	std::cout << "            📒 Welcome to your Personal PhoneBook 📒\n";
	std::cout << "=========================================================\n\n";
	
	std::cout << "Available commands:\n";
	std::cout << "  🔹 ADD     - Save a new contact\n";
	std::cout << "  🔹 SEARCH  - Display a saved contact\n";
	std::cout << "  🔹 EXIT    - Exit and delete all contacts\n\n";
	
	std::cout << "⚠️  Due to memory limitations, you can store up to 8 contacts only.\n";
	std::cout << "    Adding a 9th contact will overwrite the oldest one.\n";

	std::cout << "\n---------------------------------------------------------\n" << std::endl;

	index = 0;
}


void	PhoneBook::add_new_contact(void)
{
	contacts[index].add_new_details();
	index = (index + 1) % MaxContacts;
}
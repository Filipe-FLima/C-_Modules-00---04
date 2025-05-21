/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:59:14 by flima             #+#    #+#             */
/*   Updated: 2025/05/21 15:22:23 by flima            ###   ########.fr       */
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
	saved_contacts = -1;
}


void	PhoneBook::add_new_contact(void)
{
	bool	is_list_full;
	
	is_list_full = false;
	if (saved_contacts == (MaxContacts - 1))
		is_list_full = true;
	else
		//fix this condition
	contacts[index % MaxContacts].add_new_details(is_list_full);
	index = (index + 1) % MaxContacts;
	if (saved_contacts < MaxContacts)
		saved_contacts++;
}

void	PhoneBook::find_contact(void)
{
	int			index;
	std::string	input;

	std::cout << "\nPlease enter the index of one of the contacts listed above:\n";
	while (true)
	{
		std::getline(std::cin, input);
		std::stringstream converter(input);
		if (!(converter >> index) || !(converter.eof())){
			std::cerr << "Invalid index. Please enter a valid integer." << std::endl;
			continue ;
		}
		if (index < 0 || index > saved_contacts){
			std::cerr << "This contact does not exist. Please enter a valid contact's index." << std::endl;
			continue ;
		}
		contacts[index].printout_contact_details();
		break;
	}
}
void	PhoneBook::look_up_contacts(void)
{
	int	index;

	index = 0;
	if (saved_contacts == -1)
	{
		std::cout << "Your phonebook is empty.\n";
		return ;
	}
	std::cout << std::setw(10) << std::right << "Index" << "|"
		<< std::setw(10) << std::right << "First Name" << "|"
		<< std::setw(10) << std::right << "Last Name" << "|"
		<< std::setw(10) << std::right << "Nickame" << "|" << std::endl;
	while (index <= saved_contacts)
	{
		contacts[index].print_saved_contacts(index);
		index++;
	}
	this->find_contact();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:59:14 by flima             #+#    #+#             */
/*   Updated: 2025/05/24 13:51:16 by flima            ###   ########.fr       */
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

PhoneBook::PhoneBook()
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
	saved_contacts = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "\n=========================================================\n";
	std::cout << "              Your contacts are lost forever!\n";
	std::cout << "=========================================================\n\n";
}

void	PhoneBook::add_new_contact(void)
{
	contacts[index % MaxContacts].add_new_details();
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
		if (index < 1 || index > saved_contacts){
			std::cerr << "This contact does not exist. Please enter a valid contact's index." << std::endl;
			continue ;
		}
		contacts[index - 1].printout_contact_details();
		break;
	}
}
void	PhoneBook::look_up_contacts(void)
{
	int	index;

	index = 0;
	if (saved_contacts == 0)
	{
		std::cout << "Your phonebook is empty.\n";
		return ;
	}
	std::cout << std::setw(10) << std::right << "Index" << "|"
		<< std::setw(10) << std::right << "First Name" << "|"
		<< std::setw(10) << std::right << "Last Name" << "|"
		<< std::setw(10) << std::right << "Nickame" << "|" << std::endl;
	while (index < saved_contacts)
	{
		contacts[index].print_saved_contacts(index);
		index++;
	}
	this->find_contact();
}

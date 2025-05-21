/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:46:46 by flima             #+#    #+#             */
/*   Updated: 2025/05/21 14:19:51 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// void	Contact::set_name(std::string detail)
// {
// 	name = detail;
// }

// void	Contact::set_last_name(std::string detail)
// {
// 	last_name = detail;
// }

// void	Contact::set_nickname(std::string detail)
// {
// 	nickname = detail;
// }

// void	Contact::set_phone_number(std::string detail)
// {
	
// }

Contact::Contact(void)
{
	name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

void	Contact::add_new_details(bool list_full)
{
	//use only std::cin to name, last name and nickname? because its just one word
	std::cout << "Name: ";
	while (name == "" || list_full)
		std::getline(std::cin, name);
	// std::cin >> name; //test behavior
	std::cout << "Last name: ";
	while (last_name == "" || list_full)
		std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	while (nickname == "" || list_full)
		std::getline(std::cin,nickname);
	std::cout << "Phone Number: "; //protect it, just number
	while (phone_number == "" || list_full)
		std::getline(std::cin, phone_number);
	std::cout << "Darkest Secret: ";
	while (darkest_secret == "" || list_full)
		std::getline(std::cin, darkest_secret);
}

std::string	Contact::format_field(const std::string& field)
{
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	return (field);
}

void	Contact::print_saved_contacts(int index)
{
	std::cout << std::setw(10) << std::right << index << "|"
		<< std::setw(10) << std::right << this->format_field(name) << "|"
		<< std::setw(10) << std::right << this->format_field(last_name) << "|"
		<< std::setw(10) << std::right << this->format_field(nickname) << "|" << std::endl;
}

void	Contact::printout_contact_details(void)
{
	std::cout << "Name: " << name << '\n'
		<< "Last name: " << last_name << '\n'
		<< "Nickname" << nickname << '\n'
		<< "Phone number" << phone_number << '\n'
		<< "Darkest secret" << darkest_secret << std::endl;
}

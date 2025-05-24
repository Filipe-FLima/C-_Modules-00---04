/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:46:46 by flima             #+#    #+#             */
/*   Updated: 2025/05/24 13:36:16 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(void)
{
	name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

void	Contact::add_phone_number()
{
	
	std::cout << "Phone Number: ";
	while (true)
	{
		std::getline(std::cin, phone_number);
		if (phone_number.empty())
			std::cout << "Please enter a valid phone number: ";
		else
		{
			bool is_digit = true;
			for (size_t i = 0; i < phone_number.length(); ++i)
			{
				if (!std::isdigit(phone_number[i]))
				{
					is_digit = false;
					std::cout << "Please enter a valid phone NUMBER: ";
					break;
				}
			}
			if (is_digit){
				if (phone_number.length() < 10 || phone_number.length() > 15)
				std::cout << "Invalid phone number length. It must contain 10 to 15 digits: ";
				else
					break ;
			}
		}
				
	}
}


void	Contact::add_new_details()
{
	std::cout << "First name: ";
	while (true)
	{
		std::getline(std::cin, name);
		if (name == "")
			std::cout << "Please enter a first name: ";
		else
			break ;
	}
	std::cout << "Last name: ";
	while (true)
	{
		std::getline(std::cin, last_name);
		if (last_name == "")
			std::cout << "Please enter a last name: ";
		else
			break ;
	}
	std::cout << "Nickname: ";
	while (true)
	{
		std::getline(std::cin,nickname);
		if (nickname == "")
			std::cout << "Please enter a nickname: ";
		else
			break ;	
	}
	add_phone_number();
	std::cout << "Darkest Secret: ";
	while (true)
	{
		std::getline(std::cin, darkest_secret);
		if (darkest_secret == "")
			std::cout << "Please enter a darkest secret: ";
		else
			break ;
	}
}

std::string	Contact::format_field(const std::string& field)
{
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	return (field);
}

void	Contact::print_saved_contacts(int index)
{
	std::cout << std::setw(10) << std::right << (index + 1) << "|"
		<< std::setw(10) << std::right << this->format_field(name) << "|"
		<< std::setw(10) << std::right << this->format_field(last_name) << "|"
		<< std::setw(10) << std::right << this->format_field(nickname) << "|" << std::endl;
}

void	Contact::printout_contact_details(void)
{
	std::cout << "First Name: " << name << '\n'
		<< "Last name: " << last_name << '\n'
		<< "Nickname: " << nickname << '\n'
		<< "Phone number: " << phone_number << '\n'
		<< "Darkest secret: " << darkest_secret << std::endl;
}

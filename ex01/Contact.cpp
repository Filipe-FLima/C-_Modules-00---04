/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:46:46 by flima             #+#    #+#             */
/*   Updated: 2025/05/21 10:36:37 by flima            ###   ########.fr       */
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

void	Contact::add_new_details(void)
{
	//use only std::cin to name, last name and nickname? because its just one word
	std::cout << "Name: ";
	while (name == "")
		std::getline(std::cin, name);
	// std::cin >> name; //test behavior
	std::cout << "Last name: ";
	while (last_name == "")
		std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	while (nickname == "")
		std::getline(std::cin,nickname);
	std::cout << "Phone Number: ";
	while (phone_number == "")
		std::getline(std::cin, phone_number);
	std::cout << "Darkest Secret: ";
	while (darkest_secret == "")
		std::getline(std::cin, darkest_secret);
}
